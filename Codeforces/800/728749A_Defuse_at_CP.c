#include <stdio.h>

int main() {
    // Your code goes here
    int t;
    scanf("%d",&t);
    int a,b,c;

    for(int i =0 ; i<t ; i++){

scanf("%d%d%d",&a,&b,&c);

 if(a+b==c){
    printf("YES\n");
    continue;
 }
  if(a+c==b){
    printf("YES\n");
    continue;
 }
 else  if(a+b==c){
    printf("YES\n");
    continue;
 }
  else if(c+b==a){
    printf("YES\n");
    continue;
 }
else{
    printf("NO\n");
    continue;
}
    }
    return 0;
}