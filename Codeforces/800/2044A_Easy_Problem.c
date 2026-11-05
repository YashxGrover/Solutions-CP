#include <stdio.h>

int main() {
    // Your code goes here
    int a,b,n,t;
    int count;
    scanf("%d",&t);

    for (int i=0 ;i<t ;i++){

        scanf("%d",&n);
     count =0;

            for(int b=1 ;b<n ;b++){
                a=n-b;
                   if(a>0 && b>0){
                   count++;
                   }
            }
        printf("%d\n",count);

    }


    return 0;
}