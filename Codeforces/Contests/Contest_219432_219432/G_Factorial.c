#include <stdio.h>

int main() {
    // Your code goes here
    long long  fact=1;
    int t=0;
    int n=0;
    scanf("%d",&t);
    for (int i =0 ; i<t ; i++){
scanf("%d",&n);
fact=1;
   for(int j =1 ; j<=n ; j++){
    fact=fact*j;
   }
printf("%lld\n",fact);
    }
    return 0;
}