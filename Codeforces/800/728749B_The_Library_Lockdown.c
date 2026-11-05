#include <stdio.h>

int main() {
    // Your code goes here
    int t;
    long long n,w;
    long long total;
    scanf("%d",&t);
    for(int i =0 ; i<t ; i++){
scanf("%lld%lld",&n,&w);


   total=n/w;

printf("%lld\n",n-total);


    }
    return 0;
}