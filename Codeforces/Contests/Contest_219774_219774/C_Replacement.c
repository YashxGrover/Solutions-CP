#include <stdio.h>

int main() {
    // Your code goes here
    int n;
    if(scanf("%d",&n)!=1 || n<=0){
        return 0;
    }
    if(!(n>=2 && n<=1000)){
        return 0;
    }

   long long a[n];
    for(int i=0 ; i<n ;i++){
        scanf("%lld",&a[i]);
    }

    for(int i=0 ;i<n ;i++){
        if (a[i]>0){
            a[i]=1;
        }
        if(a[i]<0){
            a[i]=2;
        }
        if(a[i]==0){
            a[i]=0;

        }
    }

    for(int i=0 ;i<n ; i++){

        printf("%lld\t",a[i]);
    }

    return 0;
}