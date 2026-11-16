#include <iostream>
using namespace std;

int main() {
    // Your code goes here
    int tc,n;
    cin>>tc;

    for(int i =0 ; i<tc ; i++){
 cin>>n;
 
 if(n%2!=0 ){
    cout<<"0"<<"\n";
   
 }
 else{
    cout<<(n/4)+1<<"\n";
 }
  }
    return 0;
}