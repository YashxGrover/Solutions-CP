#define __USE_MINGW_ANSI_STDIO 1

#include <stdio.h>

int main() {
    // Your code goes here
    int a;
    long long b;
    char c;
    float d;
    double r;
   scanf("%d",&a);
    scanf("%lld",&b);
     scanf(" %c",&c);
      scanf("%f",&d);
       scanf("%lf",&r);
   
   


printf("%d\n",a);
printf("%lld\n",b);

printf("%c\n",c);
printf("%.2f\n",d);
printf("%.1f",r);

    return 0;
}