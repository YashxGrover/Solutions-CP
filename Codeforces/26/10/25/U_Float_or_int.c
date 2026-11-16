#include <stdio.h>

int main() {
    // Your code goes here
    float n;
    scanf("%f",&n);
int no=0;
no =n;
    if(no==n){
        printf("int %d",no);
    
    }
    else{
        printf("float %d %.3f",no,n-no);
    }
    return 0;
}