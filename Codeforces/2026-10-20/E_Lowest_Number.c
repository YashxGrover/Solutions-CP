#include <stdio.h>

int main() {
    // Your code goes here
     int n;
    if (scanf("%d",&n)!=1 || n<=0){
        return 0;
    }

    long long a[n],min;
    min=100000;

    for(int i =0 ;i<n; i++){

        scanf("%lld",&a[i]);
    }

    for (int i =0 ; i<n ;i++){
        if(a[i]<min){
            min = a[i];
        }
        
    }

    for (int i=0 ; i<n ;i++){

        if (a[i]==min){
             printf("%lld %d",a[i],i+1);
            break;
        }
    }
   


    return 0;
}