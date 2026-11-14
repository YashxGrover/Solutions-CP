#include <iostream>

using namespace std;

int main() {
   

    int n, m;
    cin >> n >> m;

    int a[105][105];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int x;
    cin >> x;

    int  found = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == x) {
                found = 1;
                break;
            }
        }
        if (found) break;
    }

    if (found) {
        cout << "will not take number\n";
    } else {
        cout << "will take number\n";
    }

    return 0;
}
