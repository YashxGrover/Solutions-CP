#include <stdio.h>

int main() {
    // Your code goes here
    char str[1000];
    fgets(str,1000,stdin);
    printf("Hello, %s",str);
    return 0;
}