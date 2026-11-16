#include <stdio.h>

int main() {
    // Your code goes here
    int n;


    if(scanf("%d",&n)!=1 || n<1 || n>1000){
        return 0;
    }

    long long ar1[n];
long long ar2[n];


for (int i =0 ; i<n ; i++)
{
    if(scanf("%lld",&ar1[i])!=1 || n<1 || n>10000000){
        return 0;
    }
}


for (int i =0 ; i<n ; i++)
{
    if(scanf("%lld",&ar2[i])!=1 || n<1 || n>10000000){
        return 0;
    }
}



long long temp =0;
for(int i =0 ; i<n-1 ; i++){
    for (int j =0 ; j<n-1-i ; j++){
        if(ar1[j]>ar1[j+1]){
temp = ar1[j];
ar1[j]=ar1[j+1];
ar1[j+1]=temp;
        }
    }
}



 temp =0;
for(int i =0 ; i<n-1 ; i++){
    for (int j =0 ; j<n-1-i ; j++){
        if(ar2[j]>ar2[j+1]){
temp = ar2[j];
ar2[j]=ar2[j+1];
ar2[j+1]=temp;
        }
    }
}



int noofelements=n;
 int count =0;

for (int j =0 ;j<n ; j++){
   if(ar1[j]==ar2[j]){
    count++;
   }
   else{
    break;
   }
}


if(noofelements==count){
    printf("yes");
}
else{
    printf("no");
}

    return 0;
}