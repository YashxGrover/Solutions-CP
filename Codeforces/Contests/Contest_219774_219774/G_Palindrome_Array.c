#include <stdio.h>

int main() {
   
      int n;
   
    if((scanf("%d\n",&n))!=1 || n<=0){
        return 0;}
    
 long long a[n];
int c=0;

    for(int i=0;i<n;i++){
scanf("%lld",&a[i]);}



    for(int i =0 ; i<n/2 ;i++){
        if(a[i]==a[n-1-i]){
            c++;
        }
    }
    if(c==n/2){
        printf("YES");
    }
    else {
        printf("NO");
    }



    
    return 0;
}