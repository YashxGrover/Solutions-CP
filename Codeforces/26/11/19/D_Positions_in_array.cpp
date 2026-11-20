#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[1005];                    // N <= 1000, so 1005 is a safe size

    for (int i = 0; i < n; i++) {
        cin >> a[i];                // read all N numbers
    }

    for (int i = 0; i < n; i++) {
        if (a[i] <= 10) {
            cout << "A[" << i << "] = " << a[i] << "\n";
        }
    }

    return 0;
}