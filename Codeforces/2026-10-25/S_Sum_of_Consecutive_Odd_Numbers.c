#include <stdio.h>

int main() {
    // Your code goes here
    int t;
    scanf("%d",&t);


    int x,y;
    int sum;
    for (int i =0 ; i<t ; i++){
    scanf("%d%d",&x,&y);
  sum=0;
  if(y>x){
for (int j =x+1 ;j<y ; j++){
    if(!(j%2==0)){
    sum=sum+j;}
}
  } 
else {for (int j =y+1 ;j<x ; j++){
    if(!(j%2==0)){
    sum=sum+j;}
}
   }
printf("%d\n",sum);
    }
    
    return 0;
}