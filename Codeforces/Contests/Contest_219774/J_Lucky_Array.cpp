#include <iostream>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    int min_val;
    int freq = 0;

    for (int i = 0; i < n; i++) {
        int current;
        cin >> current;

        if (i == 0 || current < min_val) {
            min_val = current;
            freq = 1;
        } else if (current == min_val) {
            freq++;
        }
    }

    if (freq % 2 != 0) {
        cout << "Lucky\n";
    } else {
        cout << "Unlucky\n";
    }

    return 0;
}
