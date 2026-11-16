#include <stdio.h>

int main() {
    // Your code goes here
    int n;
   
    if((scanf("%d\n",&n))!=1 || n<=0){
        return 0;
    }
 long long a[n],x;
int c=0;

    for(int i=0;i<n;i++){
scanf("%lld",&a[i]);

    }

    scanf("%lld",&x);

    for(int i=0 ;i<n ;i++){

        if(a[i]==x){
            printf("%d",i);
            c++;
            break;
        }
        
    }
if(c==0){
    printf("-1");
}

    return 0;
}