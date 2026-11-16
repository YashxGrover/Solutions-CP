#include <stdio.h>

int main() {
    // Your code goes here
    long long  n ;
    long long sum =0;

    scanf("%lld",&n);
    

    sum = n*(n+1)/2;
    printf("%lld",sum);
    return 0;
}