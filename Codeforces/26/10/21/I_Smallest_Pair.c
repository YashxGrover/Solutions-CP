#include <stdio.h>

int main() {
    // Your code int tgoes here
    int t,n;
    long long  sum=0;
          if(scanf("%d",&t)!=1 ||t<=0 || t>100){
              return 0;}
    

   
    for (int l=0 ; l<t ; l++){

        if(scanf("%d",&n)!=1 ||n<=1 || n>100){
            return 0;}


             long long  arr[n+1];
   long long temp[n]; // value when i = 0 all values of j goes from 1 to making  n different values  of sum 
          long long temp2[n];
        
         
        for (int k =1 ; k<=n ; k++){
            if (scanf("%lld",&arr[k])!=1 || arr[k]>1000000 || arr[k]<(-1000000)){
                return 0;}
        }
        
     
long long minfinal = 20000000000000000;
for (int i=1 ; i<n ; i++ ){

         for (int j=1+i ;j<=n ;j++){
           
                sum = arr[i]+arr[j]+j-i;
                      if(sum<minfinal){
                        minfinal=sum;
                        }
                    }
                }
                    
   

 printf("%lld\n",minfinal);
    }

    return 0;
}