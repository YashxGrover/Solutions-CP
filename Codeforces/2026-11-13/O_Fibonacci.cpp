#include <iostream>
using namespace std;



int main() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << 0 << "\n";
        return 0;
    }

    long long prev2 = 0;
    long long prev1 = 1;
    long long curr = 1;

    for (int i = 3; i <= n; i++) {
        curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }

    cout << curr << "\n";
    return 0;
}

