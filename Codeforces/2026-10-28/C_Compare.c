#include <stdio.h>
#include <string.h>
int main() {
    // Your code goes here
   char  str1[50];
  char   str2[50];
    scanf("%s",str1);
     scanf("%s",str2);

     int l=strcmp(str1,str2);

     if(l==0){
        printf("%s",str1);
     }
     else if(l>0){
        printf("%s",str2);
     }
     else{
        printf("%s",str1);
     }
    return 0;
}