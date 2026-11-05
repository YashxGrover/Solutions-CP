#include <stdio.h>
#include <stdlib.h>

int main() {
    // Your code goes here
    int a,b;
    scanf("%d%d",&a,&b);
int aw=0,bw=0,d=0;

for (int x=1; x<=6 ;x++){

if(abs(a-x)<abs(b-x))
aw++;

else if(abs(a-x)>abs(b-x)){
    bw++;
}
else{
    d++;
}

}
printf("%d %d %d",aw,d,bw);

    return 0;
}