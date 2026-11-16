#include <stdio.h>
#include <string.h>
#define max 15
int main() {
    // Your code goes here
    char str1[max];
    char str2[max];


    scanf("%s",str1);
    scanf("%s",str2);
int s1=strlen(str1);
int s2=strlen(str2);

printf("%d %d\n",s1,s2);

printf("%s%s\n",str1,str2);



char temp = str1[0];
str1[0]=str2[0];
str2[0]=temp;
printf("%s ",str1);
printf("%s",str2);
    
    return 0;
}