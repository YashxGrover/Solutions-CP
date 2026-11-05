#include <stdio.h>

#include<string.h>

int main() {
    // Your code goes here
    int t;
    if(scanf("%d",&t)!=1 || t>100 || t<1 ){
        return 0;
    }
    for(int i =0; i<t ;i++){

char str[1000];
str[0]='\0';
scanf("%s",str);
int lenght=strlen(str);
int j=0;
int count =0;

if(lenght>10){
    printf("%c%d%c\n",str[0],lenght-2,str[lenght-1]);

}

else{
    while(str[j]!='\0'){

        for(int k='0';k<='9';k++){
            if(str[j]==k){
                count++;
                break;
            }
        }
        j++;
    }

    if(!count){
        printf("%s\n",str);
    }
}

    }
    
    
    return 0;
}