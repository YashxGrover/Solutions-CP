#include <iostream>
using namespace std;
 int odd(int n);
 int binarycheck(int n);


int main() {
    // Your code goes here
    int n;
    cin >>n;
 if( odd(n) && binarycheck(n)){
    cout<<"YES";
 }
 else{
 cout<<"NO";
 }
    return 0;
}


int odd(int n){
    if(!(n%2==0)){
        return 1;
    }
    else{
        return 0;
    }
}


int binarycheck(int n){
    int bits[32];
    int k =0;
  while(n>0){
     bits[k]=n%2;
    n=n/2;
   
    k++;

  }


for(int i =0 ,j = k-1 ; i<j ; i++ , j--){
    if(bits[i ]!=bits[j]){
        return false;
    }
}
return true;

}