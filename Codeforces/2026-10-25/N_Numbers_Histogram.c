#include <stdio.h>

int main() {
    // Your code goes here
    char s=0;
    int n;
    int values;
    scanf(" %c%d",&s,&n);

    for(int i =0 ;i<n ;i++){

        scanf("%d",&values);
   for(int j =0 ; j<values ;j++){
        printf("%c",s);
        if(j==values-1){
            printf("\n");
        }
    }

    }
    return 0;
}