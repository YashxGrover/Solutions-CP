#include <iostream>
using namespace std;

void print(int n);
int main() {
    // Your code goes here
    int n;
    cin>>n;
    print(n);
    return 0;
}


void print(int n){
    for(int i =1 ; i<=n ; i++){
        if(i==n){
            cout<<i;
        }
        else{
        cout<<i<<" ";}
    }
}