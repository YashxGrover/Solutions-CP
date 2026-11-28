#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, q;
  cin >> n >> q;

  long long arr[n + 1];
  long long prefarr[n + 1];
  prefarr[0] = 0;

  for (int i = 1; i <= n; ++i) {
    cin >> arr[i];
  }

  for (int i = 1; i <= n; ++i) {

    prefarr[i] = prefarr[i - 1] + arr[i];
  }

  int l, r;
  long long k;

  long long sum = 0;

  while (q--) {
    cin >> l >> r >> k;

    sum = prefarr[n] - prefarr[r] + prefarr[l - 1] + k * (r - l + 1);

    if (sum % 2 == 0) {
      cout << "NO\n";
    } else {
      cout << "YES\n";
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin >> t;

  while (t--)
    solve();
  return 0;
}
