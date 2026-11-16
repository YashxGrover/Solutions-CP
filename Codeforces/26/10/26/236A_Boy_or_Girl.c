#include <stdio.h>
#include <string.h>

int main() {
    // Your code goes here
   char orignal[100];
   char str[100];
scanf("%s",orignal);

int len =strlen(orignal);
char temp;
for(int i =0 ; i<len-1 ; i++){
    for (int j =0 ; j < len-1-i ; j++){
        if(orignal[j]>orignal[j+1]){
            temp=orignal[j];
            orignal[j]=orignal[j+1];
            orignal[j+1]=temp;
        }
    }
}


int d=0;
for(int i =0 ; i<len ; i++){
    if(orignal[i]!=orignal[i+1]){
        d++;
    }
}
if(d%2==0){
    printf("CHAT WITH HER!");
}
else{
    printf("IGNORE HIM!");
}
    return 0;
}