#include <iostream>
using namespace std;

void printCharNTimes(int n, char c) {
    for (int i = 0; i < n; i++) {
        cout << c << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        char c;
        cin >> n >> c;
        printCharNTimes(n, c);
    }

    return 0;
}
