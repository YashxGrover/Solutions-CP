#include <stdio.h>

int main() {
    // Your code goes here
    char c;
    scanf(" %c",&c);
    if(c>='a' && c<='z'){
        c=c-32;
    }
    else{
        c=c+32;
    }
    printf("%c",c);
    return 0;
}