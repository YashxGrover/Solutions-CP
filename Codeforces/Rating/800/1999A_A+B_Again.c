#include <stdio.h>
int main(){
int tc,no;
int n1,n2,sum;
scanf("%d",&tc);

for(int i=0 ;i<tc ;i++){

    scanf("%d",&no);

 
     n1=no/10;
     n2=no%10;
   
   if(no>=10 && no<=99){
 sum = n1+n2;
 printf("%d\n",sum);}
}
return 0;

}
