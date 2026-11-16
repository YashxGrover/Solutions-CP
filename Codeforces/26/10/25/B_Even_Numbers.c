#include <stdio.h>

int main() {
    // Your code goes here
    int n ;
    int count=0;
    scanf("%d",&n);
    for (int i =1 ; i<=n ; i++){
        if(i%2==0){
            printf("%d\n",i);
            count++;
        }
        
    }
    if(count==0){
        printf("-1");
    }
    return 0;
}