#include <stdio.h>
int main(){

double x;
scanf("%lf",&x);

if(x>=0 && x<=100){
    if(x<=25)
    printf("Interval [0,25]");

   else  if(x<=50)
    printf("Interval (25,50]");

  else  if(x<=75)
   printf("Interval (50,75]");

  else  if(x<=100)
   printf("Interval (75,100]");
}
else{
    printf("Out of Intervals");
}

    return 0;
}