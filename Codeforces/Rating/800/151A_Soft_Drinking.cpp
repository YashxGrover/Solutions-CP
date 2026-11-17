#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Your code goes here
    int n , k ,l , c , d ,p ,nl ,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np ;

    int tsalt=p/np;
    int tslice=c*d;
    int tlit=(k*l)/nl;
    int ans= min({tsalt,tslice,tlit});
    cout<< ans/n;
    return 0;
}