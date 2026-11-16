#include <stdio.h>

int main() {
    // Your code goes here
    int y,k;
    int n1,n2,n3,n4;
    int r1,r2,r3,r4;
    scanf("%d",&y);
    if(!(y>=1000 && y<=9000)){
        return 0;
    }
    for (int i=y+1;i<=10000 ;i++){
int k=i;
n1=k/1000;
r1=k%1000;
n2=r1/100;
r2=r1%100;
n3=r2/10;
n4=r2%10;

if((!(n1==n2 || n1==n3 || n1==n4))){
   if((!(n2==n1 || n2==n3 || n2==n4 ))){
    if((!(n3==n2 || n3==n1 || n3==n4 ))){
        if((!(n4==n1 || n4==n2 || n4==n3))){
            printf("%d",i);
            break;
        }
    }
   }
}

    
}
    

    
    return 0;
}