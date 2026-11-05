#include <iostream>
using namespace std;

int main() {
    // Your code goes here
    int k ,r;
    cin>>k>>r;

    for(int i =1; ;i++){
        int cost=k*i;
        int found=0;

        for(int j =0 ; ; j++){
            int c10only=10*j;
            int c10plus=10*j+r;

            if(cost==c10only ||cost==c10plus){
                cout<<i<<endl;
                found=1;
                break;
            }

            if(c10only>cost){
                break;
            }
        }
        if(found){
            break;
        }
    }
    return 0;
}