#include <stdio.h>

int main() {
    // Your code goes here
    int n ;
    scanf("%d",&n);
    for(int i =n ; i >=1 ; i--){
        for(int j =i ; j>0; j--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}