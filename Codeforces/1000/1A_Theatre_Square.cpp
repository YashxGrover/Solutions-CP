#include <iostream>
using namespace std;

int main() {
    // Your code goes here
    long long n,m,a;
    cin>>n>>m>>a;

    long long width_count = (n + a - 1) / a;
    long long height_count = (m + a - 1) / a;

    long long total_flagstones = width_count * height_count;

    cout << total_flagstones << "\n";

    return 0;
}


