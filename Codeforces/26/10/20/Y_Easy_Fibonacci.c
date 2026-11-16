#include <stdio.h>

int main() {
    // Your code goes here
    int a=0,b=1;
int n;
if(scanf("%d",&n)!=1 || n<=0){
    return 0;
}
for(int i=0 ; i<n ;i++){

    if(i==0){
        printf("%d\t",a);
    }
    else if(i==1){
        printf("%d\t",b);
    }
    else{
        long long next=a+b;
        if(i==n-1){
            printf("%lld",next);
        }
        else {printf("%lld\t",next);}
        a=b;
        b=next;
    }
}
    return 0;
}