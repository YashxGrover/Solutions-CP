#include <stdio.h>
#include <string.h>



char str[1000000];
int main() {
    // Your code goes here
    
    fgets(str,1000000,stdin);
int i =0;

   while(str[i]!='\0'){
    if(str[i]=='\\'){
        break;
    }
    printf("%c",str[i]);
    i++;
   }
    return 0;

}