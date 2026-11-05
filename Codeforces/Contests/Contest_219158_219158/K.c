#include <stdio.h>

int main() {
    // Your code goes here
    long a,b,c;
    scanf("%ld%ld%ld",&a,&b,&c);
    long max=0;
    long min=0;
    if(a>= b && a >=c){
        max = a;
        min = (b<c ? b : c);
    }else if (b >= a && b >= c){
        max = b;
        min = (a<c ? a : c);
    }else {
        max = c;
        min = (a<b ? a : b);
    }
    printf("%ld %ld",min,max);
    return 0;
}