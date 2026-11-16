#include <stdio.h>

int main() {
    // Your code goes here
    char str[100010];
    fgets(str,sizeof(str),stdin);


    for (int i =0 ; str[i]!='\0'; i++){
        if(str[i]=='\n'){
            str[i]='\0';
        }
    }

    for (int i =0 ; str[i]!='\0'; i++){
        if(str[i]>='A'&& str[i]<='Z'){
            str[i]=str[i]+32;
        }

        else if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
        else if(str[i]==','){
            str[i]=' ';
        }
    }

    puts(str);
    return 0;
}