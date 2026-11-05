#include <stdio.h>

int main() {
    // Your code goes here
    long n;
   if(scanf("%ld",&n)!=1 || n<2 || n>100000){
    return 0;
   }
    
    long prime=1;

    if(n<=1){
        printf("NO");
        return 0;
    }

    if(n==2 || n==3){
        printf("YES");
        return 0;
    }
if(n%2==0 || n%3==0){
    printf("NO");
    return 0;
}

    for (int i =5 ;i<=n/i ; i+=6){
        if(n%i==0 || n%(i+2)==0){
            printf("NO");
            prime=0;
            break;
        }
    }
   
    if(prime!=0){
        printf("YES");
    }
    return 0;
}