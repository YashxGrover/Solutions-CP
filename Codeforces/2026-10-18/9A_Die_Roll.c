#include <stdio.h>
int main(){

int x,y,w;

if(scanf("%d%d",&y,&w) ==2){

if((y>=1 && y<=6) && (w>=1 && w<=6)){


int largest=w>y ? w :y;
switch(largest){
case (1):printf("1/1");
break;
case (2):printf("5/6");
break;
case (3):printf("2/3");
break;
case (4):printf("1/2");
break;
case (5):printf("1/3");
break;
case (6):printf("1/6");
break;
      }
   }

}
    return 0;
}