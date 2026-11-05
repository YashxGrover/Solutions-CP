#include <stdio.h>

int main() {
    // Your code goes here
    int n;
    if(scanf("%d",&n)!=1 || n<=0){
        return 0;
    }

    long long  A[n];
    long long sum=0;
    for(int i=0; i<n ;i++){
scanf("%lld",&A[i]);
    }
for(int i=0;i<n;i++){
    sum+=A[i];
}
if(sum<0){
    sum=-sum;
}
printf("%lld",sum);
    return 0;
}