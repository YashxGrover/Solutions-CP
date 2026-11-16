#include <stdio.h>

int main() {
    // Your code goes here
    float x,y;
    scanf("%f%f",&x,&y);
    if(x>0 && y>0){
        printf("Q1");
    }
    else if(x<0 && y>0){
        printf("Q2");
    }
     else if(x<0 && y<0){
        printf("Q3");
    }
     else if(x>0 && y<0){
        printf("Q4");
    }
    else if(y==0 && x!=0){
        printf("Eixo X");
    }
     else if(x==0 && y!=0){
        printf("Eixo Y");
    }
    else if(x==0 && y ==0) {
        printf("Origem");
    }

    return 0;
}