#include <stdio.h>
int main(){

int t,n;
int a,b;
int x1,x2;
int winner,temp;
scanf("%d",&t);

for(int i=1;i<=t ;i++){
scanf("%d",&n);
    for(int j=2 ;j<=n+1 ;j++){
        a=j;

        b=j+1;
x1=a%b;
x2=b%a;

if(x1!=0 || x2!=0){
winner=a>b ? b : a;

}
else {
    winner=a>b ? a : b;
}
    }
    
}
printf("%d",winner);

    return 0;
}