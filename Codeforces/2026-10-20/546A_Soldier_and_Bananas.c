#include <stdio.h>

int main() {
    // Your code goes here
    int  k,w;
    long n,p,b;
    
    scanf("%d %ld %d",&k,&n,&w);
if(!((n>=0 && n<=1000000000) && (k>=1 && k<=1000) && (w>=1 && w<=10000))){
    return 0;
}
p=((w*(w+1))/2)*k;
b=p-n;
if(b>=0){
    printf("%ld",b);
  
    }
    if(b<0){
        printf("%ld",b-b);

}
    return 0;
}