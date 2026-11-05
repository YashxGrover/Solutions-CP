#include <stdio.h>

int main() {
    // Your code goes here
    int t;
    scanf("%d",&t);
    long long n=0;
    long long digit=0;
    for(int i =0 ; i<t ; i++){
scanf("%lld",&n);
if(n>0){
    while(n>0){
        digit=n%10;
        n=n/10;
printf("%lld ",digit);
    }
    printf("\n");
}

else{
    printf("0\n");
}

    }
    return 0;
}