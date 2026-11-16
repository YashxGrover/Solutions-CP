#include <stdio.h>

int main() {
    // Your code goes here
    int n=100000;
    int cp=1999;
    int pass=0;
    for (int i =0;i<=n ;i++){
scanf("%d",&pass);

if(pass==cp){
    printf("Correct");
    break;
}
else
    {
        printf("Wrong\n");
    }
}
    return 0;
}