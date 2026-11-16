#include <stdio.h>
int main(){

int t,a,b,c,d;
scanf("%d",&t);

for(int i=1 ;i<=t ;i++){
    scanf("%d %d %d %d",&a,&b,&c,&d);

 
    
    if((a==b && b==c) && (c==d && d!=0)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}


    return 0;
}