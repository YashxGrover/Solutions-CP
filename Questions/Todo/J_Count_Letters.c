#include <stdio.h>
#include <string.h>
#define max 10000005

char str[max];


int main() {
    // Your code goes here
    
    scanf("%s",str); 

int len=strlen(str);
char temp=0;
   for(int i =0 ; i<len -1 ; i++){
     for (int j =0 ; j<len-1-i ; j++){

    if(str[j]>str[j+1]){
      temp=str[j];
      str[j]=str[j+1];
      str[j+1]=temp;
       }
     }
   }

   int freq=1;
   int flag=0;
   for (int i =0 ; i<len ; i++){
    freq=1;
    if(str[i]==str[i+1]){
        flag=1;
        freq++;
        i=freq+i;
    }

    else{
        printf("%c : %d\n",str[i],freq);
        continue;
    }
     printf("%c : %d\n",str[i],freq);

      }


    return 0;
}