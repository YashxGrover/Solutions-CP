#include <stdio.h>
int main(){

int A,B;
scanf("%d %d",&A,&B);

int n1=A%B;
int n2=B%A;

if(n1==0 || n2==0){
    printf("Multiples");
}
else{
    printf("No Multiples");
}



    return 0;
}
