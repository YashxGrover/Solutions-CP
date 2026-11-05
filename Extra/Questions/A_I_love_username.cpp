#include <iostream>
using namespace std;

int main(){

int n,a=0;
cin>>n;
if(!(n>=1 && n<=1000)){
    return 0;
}
int arr[n];

for (int i=0 ; i<n ; i++){
    cin >>arr[i];

    if(!(arr[i]<=10000 && arr[i]>=0)){
        return 0;
    }

}

int c=0;
for(int k=1 ; k<n ;k++){

c=0;
  if(arr[k]>arr[k-1]){
  for(int j =0 ; j<=k ; j++){
    if(arr[k]>arr[j]){

        c++;
    }
    else{
    break;
    }
  }
  if(c==k){
    a++;
    continue;
  }
  }

  if(arr[k]<arr[k-1]){
for(int j =0 ; j<=k ; j++){
    if(arr[k]<arr[j]){
        c++;
    }
    else{
        break;
    }
  }
  if(c==k){
    a++;
    continue;
  }
  }

}
cout<<a;

    
    return 0;
}