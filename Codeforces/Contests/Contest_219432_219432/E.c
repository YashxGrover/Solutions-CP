#include <stdio.h>

int main() {
    // Your code goes here
    int n =0;
    if(scanf("%d",&n)!=1 || n<1 || n>1000){
        return 0;
    }

    long long arr[n];
    for (int i =0 ; i<n ;i++){
        scanf("%lld",&arr[i]);
    }
long long temp =0;
    for(int i =0 ; i< n-1; i++){
        for (int j =0 ; j<n-1-i ; j++){
if( arr[j]> arr[j+1]){
    temp = arr[j];
    arr[j]=arr[j+1];
    arr[j+1]= temp;

}
        }
    }

    printf("%lld",arr[n-1]);
    return 0;
}