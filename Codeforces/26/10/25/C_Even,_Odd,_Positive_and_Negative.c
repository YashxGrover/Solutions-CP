#include <stdio.h>

int main() {
    // Your code goes here
    int n;
    scanf("%d",&n);
    long x;
    int even=0,odd=0,neg=0,pos=0;

    for (int i =1 ; i<=n ; i++){
        scanf("%ld",&x);
        if(x%2==0){
            even++;
        }
         if(x%2!=0){
            odd++;
        }
         if(x<0){
            neg++;
        }
        if(x>0){
            pos++;
        }
    }

    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d",even,odd,pos,neg);
    return 0;
}