#!/usr/bin/env python3
"""Build a daily index of the latest accepted Codeforces solutions in this repo."""

from __future__ import annotations

import os
import re
import sys
from collections import defaultdict
from datetime import datetime, timezone
from pathlib import Path
from urllib.parse import quote
from zoneinfo import ZoneInfo

import requests

ROOT = Path(__file__).resolve().parents[2]
CODEFORCES_DIR = ROOT / "Codeforces"
OUTPUT = CODEFORCES_DIR / "By_Day.md"
HANDLE = os.environ.get("CF_HANDLE", "").strip()
LOCAL_TZ = ZoneInfo("Asia/Kolkata")
API = "https://codeforces.com/api/user.status"


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


def source_paths():
    paths = []
    for path in CODEFORCES_DIR.rglob("*"):
        if not path.is_file() or path == OUTPUT or path.name == "pushed.json":
            continue
        paths.append(path.relative_to(CODEFORCES_DIR))
    return paths


def find_source(contest_id, index, paths):
    rated_prefix = f"{contest_id}{index}_"
    unrated_prefix = f"{index}_"
    matches = []
    for rel in paths:
        parts = rel.parts
        if len(parts) < 2:
            continue
        if parts[0].isdigit() and parts[-1].startswith(rated_prefix):
            matches.append(rel)
        elif len(parts) >= 3 and parts[0] == "Contests":
            contest_folder = parts[1]
            if contest_folder.endswith(f"_{contest_id}") and parts[-1].startswith(unrated_prefix):
                matches.append(rel)
    return sorted(matches, key=lambda p: str(p))[0] if matches else None


def link_text(submission, rel_path):
    problem = submission.get("problem", {})
    contest_id = submission.get("contestId") or problem.get("contestId")
    index = problem.get("index", "?")
    name = problem.get("name", "Unnamed problem")
    url = f"https://codeforces.com/contest/{contest_id}/problem/{index}"
    rel_url = quote(rel_path.as_posix(), safe="/._-()")
    return f"[{index}. {name}]({url}) · [solution]({rel_url})"


def main():
    submissions = fetch_latest_accepted()
    paths = source_paths()
    grouped = defaultdict(list)
    missing = []

    for (contest_id, index), submission in submissions.items():
        rel_path = find_source(contest_id, index, paths)
        if not rel_path:
            missing.append((contest_id, index, submission))
            continue
        submitted_at = datetime.fromtimestamp(
            submission["creationTimeSeconds"], tz=timezone.utc
        ).astimezone(LOCAL_TZ)
        grouped[submitted_at.strftime("%Y-%m-%d")].append((submitted_at, submission, rel_path))

    lines = [
        "# Codeforces solutions by submission day",
        "",
        f"Generated from the latest accepted submission for each problem on Codeforces handle **{HANDLE}**.",
        "Dates use India Standard Time (IST). Existing solution files stay in their current rating or contest folders.",
        "",
    ]
    if not grouped:
        lines.extend(["_No accepted submissions with matching solution files were found._", ""])

    for day in sorted(grouped, reverse=True):
        entries = sorted(grouped[day], key=lambda item: (item[0], item[1]["id"]))
        lines.append(f"## {day} · {len(entries)} problem{'s' if len(entries) != 1 else ''}")
        lines.append("")
        for submitted_at, submission, rel_path in entries:
            stamp = submitted_at.strftime("%H:%M IST")
            lines.append(f"- {stamp} — {link_text(submission, rel_path)}")
        lines.append("")

    if missing:
        lines.extend([
            "## Accepted submissions without a matching file",
            "",
            "These may appear here briefly while the separate AutoPush workflow syncs the source files.",
            "",
        ])
        for contest_id, index, submission in sorted(
            missing, key=lambda item: item[2].get("creationTimeSeconds", 0), reverse=True
        ):
            problem = submission.get("problem", {})
            submitted_at = datetime.fromtimestamp(
                submission["creationTimeSeconds"], tz=timezone.utc
            ).astimezone(LOCAL_TZ)
            name = problem.get("name", "Unnamed problem")
            lines.append(
                f"- {submitted_at:%Y-%m-%d %H:%M IST} — "
                f"[{index}. {name}](https://codeforces.com/contest/{contest_id}/problem/{index})"
            )
        lines.append("")

    OUTPUT.write_text("\n".join(lines), encoding="utf-8")
    print(f"Wrote {OUTPUT.relative_to(ROOT)}: {len(submissions) - len(missing)} linked, {len(missing)} awaiting source files.")


if __name__ == "__main__":
    try:
        main()
    except Exception as exc:
        print(f"ERROR: {exc}", file=sys.stderr)
        sys.exit(1)
