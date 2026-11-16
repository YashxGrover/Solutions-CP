#include <stdio.h>

int main() {
    // Your code goes here
    int a,b;
    long c;
    char s,q;
    scanf("%d %c%d %c%ld",&a,&s,&b,&q,&c);
    if(s=='+'){
 if(a+b==c){
    printf("Yes");
 }
 else{
    printf("%d",a+b);
 }
    }

    else if( s=='-'){
        if(a-b==c){
            printf("Yes");
        }
        else {
            printf("%d",a-b);
        }
    }

    else if(s=='*'){
        if(a*b==c){
            printf("Yes");
        }
        else {
            printf("%d",a*b);
        }
    }
    return 0;
}