#!/usr/bin/env python3
"""Keep the existing Codeforces folders and mirror solutions into date folders."""

from __future__ import annotations

import os
import re
import shutil
import sys
from datetime import datetime, timezone
from pathlib import Path
from zoneinfo import ZoneInfo

import requests

ROOT = Path(__file__).resolve().parents[2]
CODEFORCES_DIR = ROOT / "Codeforces"
HANDLE = os.environ.get("CF_HANDLE", "").strip()
LOCAL_TZ = ZoneInfo("Asia/Kolkata")
API = "https://codeforces.com/api/user.status"
DATE_FOLDER = re.compile(r"^\d{4}-\d{2}-\d{2}$")


def safe_problem_name(name):
    name = re.sub(r'[<>:"/\\|?*.]', "_", name)
    name = re.sub(r"[\s_]+", "_", name)
    return name.strip("_. ") or "Unknown"


def fetch_latest_accepted():
    if not HANDLE:
        raise RuntimeError("Set the repository Actions variable CF_HANDLE to your Codeforces handle.")

    accepted_by_problem = {}
    start = 1
    while True:
        response = requests.get(
            API,
            params={"handle": HANDLE, "from": start, "count": 1000},
            timeout=30,
        )
        response.raise_for_status()
        payload = response.json()
        if payload.get("status") != "OK":
            raise RuntimeError(f"Codeforces API error: {payload.get('comment', 'unknown error')}")
        batch = payload.get("result", [])
        for submission in batch:
            if submission.get("verdict") != "OK":
                continue
            problem = submission.get("problem", {})
            contest_id = submission.get("contestId") or problem.get("contestId")
            index = problem.get("index")
            if contest_id is None or not index:
                continue
            key = (int(contest_id), str(index))
            current = accepted_by_problem.get(key)
            if current is None or submission["id"] > current["id"]:
                accepted_by_problem[key] = submission
        if len(batch) < 1000:
            break
        start += len(batch)
    return accepted_by_problem


def find_sources(contest_id, index, problem_name):
    safe_name = safe_problem_name(problem_name)
    rated_prefix = f"{contest_id}{index}_{safe_name}"
    unrated_prefix = f"{index}_{safe_name}"
    matches = []
    for path in CODEFORCES_DIR.rglob("*"):
        if not path.is_file() or path.name == "pushed.json":
            continue
        relative = path.relative_to(CODEFORCES_DIR)
        parts = relative.parts
        if len(parts) < 2:
            continue
        is_dated = bool(DATE_FOLDER.fullmatch(parts[0]))
        is_rated_file = path.name.startswith(rated_prefix)
        is_unrated_file = path.name.startswith(unrated_prefix)
        if is_dated:
            if is_rated_file or is_unrated_file:
                matches.append(path)
        elif parts[0].isdigit() and is_rated_file:
            matches.append(path)
        elif len(parts) >= 3 and parts[0] == "Contests":
            if parts[1].endswith(f"_{contest_id}") and is_unrated_file:
                matches.append(path)
    return matches


def submission_day(submission):
    return datetime.fromtimestamp(
        submission["creationTimeSeconds"], tz=timezone.utc
    ).astimezone(LOCAL_TZ).strftime("%Y-%m-%d")


def remove_empty_date_folder(directory):
    while directory != CODEFORCES_DIR and DATE_FOLDER.fullmatch(directory.name):
        try:
            directory.rmdir()
        except OSError:
            break
        directory = directory.parent


def main():
    submissions = fetch_latest_accepted()
    copied = 0
    unchanged = 0
    missing = []

    for (contest_id, index), submission in submissions.items():
        problem = submission.get("problem", {})
        matches = find_sources(contest_id, index, problem.get("name", ""))
        if not matches:
            missing.append((contest_id, index, submission))
            continue

        legacy = [
            path for path in matches
            if not DATE_FOLDER.fullmatch(path.relative_to(CODEFORCES_DIR).parts[0])
        ]
        dated = [
            path for path in matches
            if DATE_FOLDER.fullmatch(path.relative_to(CODEFORCES_DIR).parts[0])
        ]
        # Keep the original rating/contest file as the canonical copy.
        source = sorted(legacy or dated, key=lambda path: path.as_posix())[0]
        destination = CODEFORCES_DIR / submission_day(submission) / source.name
        destination.parent.mkdir(parents=True, exist_ok=True)

        if source != destination:
            shutil.copy2(source, destination)
            copied += 1
        else:
            unchanged += 1

        # The latest accepted solution belongs under its latest accepted date only.
        for duplicate in dated:
            if duplicate != destination and duplicate.exists():
                old_parent = duplicate.parent
                duplicate.unlink()
                remove_empty_date_folder(old_parent)

    print(f"Added or refreshed {copied} date-folder copies; {unchanged} were already organized.")
    print(f"{len(missing)} accepted problems had no matching synced source file.")
    if missing:
        print("Unmatched accepted submissions (the separate AutoPush workflow may still be syncing them):")
        for contest_id, index, submission in sorted(
            missing, key=lambda item: item[2].get("creationTimeSeconds", 0), reverse=True
        ):
            problem = submission.get("problem", {})
            day = submission_day(submission)
            name = problem.get("name", "Unnamed problem")
            print(
                f"- {day}: {index}. {name} "
                f"(https://codeforces.com/contest/{contest_id}/problem/{index})"
            )


if __name__ == "__main__":
    try:
        main()
    except Exception as exc:
        print(f"ERROR: {exc}", file=sys.stderr)
        sys.exit(1)
