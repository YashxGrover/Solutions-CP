#include <stdio.h>

int main() {
    // Your code goes here
    int a=0,b=0;
    char s=0;
    scanf("%d %c %d",&a,&s,&b);

    if(s=='<' && a<b){
        printf("Right\n");
    }
    else if(s=='='&& a==b){
        printf("Right\n");
    }
  else if(s=='>' && a>b){
    printf("Right\n");
  }
  else{
    printf("Wrong\n");
  }
    return 0;
}