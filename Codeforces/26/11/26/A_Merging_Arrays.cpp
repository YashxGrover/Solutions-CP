#include <iostream>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, m;
    cin >> n >> m;
 
    long long a[n];
    long long b[m];
    long long c[n + m];
 
    // Read array a
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    // Read array b
    for (int j = 0; j < m; j++) {
        cin >> b[j];
    }
 
    int i = 0; // Pointer for a
    int j = 0; // Pointer for b
    int k = 0; // Pointer for c
 
    // Merge while both arrays still have elements
    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            c[k] = a[i];
            i++;
        } else {
            c[k] = b[j];
            j++;
        }
        k++;
    }
 
    // Copy remaining elements from a
    while (i < n) {
        c[k] = a[i];
        i++;
        k++;
    }
 
    // Copy remaining elements from b
    while (j < m) {
        c[k] = b[j];
        j++;
        k++;
    }
 
    // Output merged array
    for (int idx = 0; idx < n + m; idx++) {
        cout << c[idx] << " ";
    }
    cout << "\n";
 
    return 0;
}
