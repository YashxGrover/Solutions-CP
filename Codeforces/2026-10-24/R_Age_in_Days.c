#include <stdio.h>

int main() {
    // Your code goes here
    long n;
    scanf("%ld",&n);

    int years=n/365;
    int months= (n-365*years)/30;
    int days=n-(years*365)-(months*30);

    printf("%d years\n",years);
     printf("%d months\n",months);
      printf("%d days",days);
    return 0;
}