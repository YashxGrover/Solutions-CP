#include <stdio.h>
#include <string.h>
int main() {
    // Your code goes here
    char f1[100],s1[100],s2[100],f2[100];
    scanf("%s",f1);
     scanf("%s",s1);

      scanf("%s",f2);

       scanf("%s",s2);


int j =strlen(s1);
int k=strlen(s2);
if(j==k){

int i = strncmp(s1,s2,k);

if(i==0){
    printf("ARE Brothers");
}
else{
    printf("NOT");
}
}
else{
    printf("NOT");
}
    return 0;
}