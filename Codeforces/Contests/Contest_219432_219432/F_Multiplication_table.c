#include <stdio.h>

int main() {
    // Your code goes here
    int n ;
    scanf("%d",&n);
    for (int i =1; i<=12 ; i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}