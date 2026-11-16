#include <stdio.h>

int main() {
    // Your code goes here
    int n,m;
    int c1=0,c2=0;
    int nextprime,x;
scanf("%d%d",&n,&m);

if(n>=2 && m<=50)

if(!(m>n)){
    return 0;}


for (int i=1 ;i<=m ;i++){
    if(m%i==0){
        c1++;
    }
}
if (c1==2){

for (int k=n+1 ;k<=m ;k++){
int x=k;
c2=0;
for(int j=1 ;j<=k ;j++){
    if(k%j==0){
        c2++;
    }
}
    if (c2==2){
        nextprime=k;
        break;
    }



}
if(m==nextprime){
    printf("YES");

}
else {
    printf("NO");
}
}


else {
    printf("NO");
}
    return 0;
}