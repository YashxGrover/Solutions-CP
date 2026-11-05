#include <iostream>
using namespace std;

int main() {
    // Your code goes here
    int k,r;
    cin >> k >> r;
int count=0;
int total;
    for(int i =1 ; ;i++){
        total =i*k;
        
        if(total % 10==0 || total % 10 ==r){
            cout  <<i <<endl;
       
            break;
        }
       
    }

    return 0;
}