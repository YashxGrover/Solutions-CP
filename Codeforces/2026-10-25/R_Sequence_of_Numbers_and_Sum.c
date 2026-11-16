#include <stdio.h>

int main() {
    // Your code goes here
    
    int n ,m;

    for (int i =0 ;  ; i++){



      scanf("%d%d",&n,&m);
if(n<=0 || m<=0){
    break;
}

else{
   int sum=0;
    if(n>=m){
    for(int k =m ;k<=n ; k++){
        printf("%d ",k);
        sum=sum+k;
    }
    printf("sum =%d",sum);
    }
     else if(m>n){
    for(int k =n ;k<=m ; k++){
        printf("%d ",k);
        sum=sum+k;
    }
    printf("sum =%d",sum);
    }
}
printf("\n");


    }
    return 0;
}