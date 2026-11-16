#include <stdio.h>
int main(){

int a,b;
scanf("%d %d",&a,&b);

int years=0;
while(!(a>b)){
    a=3*a;
    b=b*2;
    years+=1;
}
printf("%d",years);


    return 0;
}