#include <stdio.h>
int main(){
int t,x,n;
int sum=0;
scanf("%d",&t);

 if( !(t>=1 && t<=100)){
        return 0;
    }

for (int i=1 ; i<=t ;i++){

    scanf("%d",&x);
    scanf("%d",&n);
    
   if((x>=1 && x<=10) && (n>=1 && n<=10)){
    
sum =0;

    for(int j=1; j<=n ;j++){

        if(j%2==0){
            sum=sum-x;
        }
        else
        sum=sum+(x);

    }
    printf("%d\n",sum);

   }
continue;

}



    return 0;
}