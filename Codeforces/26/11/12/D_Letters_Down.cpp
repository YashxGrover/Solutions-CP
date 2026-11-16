#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int c = 0;

        for (char bigger = 'z'; bigger >= 'b'; bigger--) {
     for (int i = 0; i < n / 2; i++) {
     if (s[i] != s[n - 1 - i] && (s[i] == bigger || s[n - 1 - i] == bigger)) {
         c++;
           for (int j = 0; j < n; j++) {
                if (s[j] == bigger) {
                    s[j] = bigger - 1;
                        }
                    }
                    break;
                }
            }
        }
        cout << c << "\n";
    }
    return 0;
}
