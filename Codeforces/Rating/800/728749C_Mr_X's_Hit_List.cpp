#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  string names[105];
  for (int i = 0; i < n; ++i) {

    cin >> names[i];

    bool found = false;

    // Check all previous names from index 0 up to i - 1
    for (int j = 0; j < i; j++) {
      if (names[i] == names[j]) {
        found = true;
        break;
      }
    }

    if (found) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  // cin >> t;
  while (t--)
    solve();
  return 0;
}
