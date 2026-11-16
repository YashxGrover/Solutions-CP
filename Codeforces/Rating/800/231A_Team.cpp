#include <iostream>
using namespace std;

int main() {
    // Your code goes here
    int n;
    cin >> n ;
    int arr[3];
    int win=0,solve=0;
    for(int i =0 ; i< n ; i++){
        win=0;
  for(int j =0 ; j<3 ; j++){
    cin>> arr[j];
    if(arr[j]==1){
        win++;
    }
  }
        if(win >=2){
            solve++;
        }

    }


        cout<<solve<<endl;
        
    

    return 0;
}