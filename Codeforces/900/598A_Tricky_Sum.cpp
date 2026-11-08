#include <iostream>
using namespace std;

int main() {
    // Your code goes here
    int t;
   cin>>t;
    
long long  n;
long long sum=0;
long long twos=1;

for (int i=0;i<t;i++){
    sum=0;
    twos=1;
    cin>>n;
    sum=(n*(n+1))/2;

   
    while(twos<=n){
        sum=sum-twos*2;
        twos=twos*2;
    }
    cout<<sum<<endl;
}

    return 0;
}