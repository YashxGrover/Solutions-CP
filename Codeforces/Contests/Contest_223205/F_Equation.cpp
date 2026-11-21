

#include <iostream>
using namespace std;

long long power(int base, int exp) {
    long long result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

long long calculateEquation(int x, int n) {
    long long sum = 0;
    for (int i = 2; i <= n; i += 2) {
        sum += power(x, i);
    }
    return sum;
}

int main() {
    int x, n;
    if (cin >> x >> n) {
        cout << calculateEquation(x, n) << endl;
    }
    return 0;
}
