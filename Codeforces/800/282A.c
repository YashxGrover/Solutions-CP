#include <stdio.h>
#include <string.h>
int main() {
    // Your code goes here
    int n ;
    scanf("%d",&n);
    
    int y=0;
    for(int i =0 ; i<n ; i++){
  char str[10];
  scanf("%s",str);

  int a=strcmp(str,"++X");
 int s=strcmp(str,"--X");
 int d=strcmp(str,"X++");
 int w=strcmp(str,"X--");
 if(a==0){
   ++y;
    continue;;
 }
 else if(s==0){
    --y;
    continue;
 }
 else if(d==0){
    y++;}

 else if(w==0){
    y--;
 }
    }
printf("%d",y);



    return 0;
}