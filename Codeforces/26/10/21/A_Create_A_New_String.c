#include <stdio.h>
#include <string.h>
int main() {
    // Your code goes here
    char str1[1000];
    char str2[1000];
    scanf("%s",str1);
    scanf("%s",str2);

    int i = strlen(str1);
    int j = strlen(str2);

    printf("%d %d\n",i,j);
printf("%s %s",str1,str2);
    return 0;
}