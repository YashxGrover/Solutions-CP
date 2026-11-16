#include <stdio.h>

int main() {
    // Your code goes here
    char c;
    scanf("%c",&c);
    if(c>='0' && c<='9'){
        printf("IS DIGIT");
    }
    else {
        printf("ALPHA\n");
        if(c>='A' && c<='Z'){
            printf("IS CAPITAL");
        }
        else if(c>='a' &&  c<='z'){
            printf("IS SMALL");
        }
    }
    return 0;
}