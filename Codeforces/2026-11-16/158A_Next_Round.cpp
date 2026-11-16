#include <iostream>
using namespace std;

int main() {
    // Your code goes here
    int n , k;
    cin >> n >>k ;

    int arr[n];
    for(int i =0 ; i< n ; i++){
        cin >> arr[i];
    }
    int value = arr[k-1];
    int c=0;
 for(int i =0 ; i< n ; i++){
  if(arr[i]>=value){
    if(arr[i]!=0){c++;}
    else{
        cout<< c;
        return 0;
    }
  }
 }
cout<< c;


    return 0;
}