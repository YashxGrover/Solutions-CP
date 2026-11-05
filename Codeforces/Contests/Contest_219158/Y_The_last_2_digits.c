#include <stdio.h>

int main() {
    // Your code goes here
    long long a,b,c,d;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
    a=a%100;
     b=b%100;
      c=c%100;
       d=d%100;
    long long prod=(a*b*c*d)%100;
if(prod<=9){
    printf("0%lld",prod);

}
else{
    printf("%lld",prod);
}
    
    return 0;
}