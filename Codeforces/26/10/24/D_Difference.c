#include <stdio.h>

int main() {
    // Your code goes here
    long long  a,b,c,d;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
    long long  x=0;
 x=(a*b)-(c*d);
    printf("Difference = %lld",x);

    return 0;
}