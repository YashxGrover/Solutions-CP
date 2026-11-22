#include <iostream>

using namespace std;

void findMinMax(int arr[], int n) {
    int minVal = arr[0];
    int maxVal = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    cout << minVal << " " << maxVal << "\n";
}

int main() {
    int n;
    if (cin >> n) {
        int a[1005];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        findMinMax(a, n);
    }
    return 0;
}
