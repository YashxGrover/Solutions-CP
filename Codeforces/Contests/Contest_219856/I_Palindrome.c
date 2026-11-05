#include <stdio.h>
#include <string.h>
int main() {
    // Your code goes here
    char str[1005];
    scanf("%s",str);

    int len = strlen(str);
int d=0;
    for(int i = 0 ; i<len/2 ; i++){
        if(str[i]==str[len-1-i]){
            d++;
        }
    }

    if(d==len/2){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}