#include <stdio.h>

int main() {
    // Your code goes here
    int n;
    int max_index=0;
    int min_index=0;
         

        if(scanf("%d",&n)!=1 || n<2 || n>1000){
            return 0;}


             long long  arr[n];
  
        
         
        for (int k =0 ; k<n ; k++){
            if (scanf("%lld",&arr[k])!=1 || arr[k]>100000 || arr[k]<(-100000)){
                return 0;}
        }
        long long max=arr[0];
        long long min =arr[0];

for (int i =1 ; i<n ;i++){
    if(arr[i]>max){
        max=arr[i];
         max_index=i;
    }

}
for (int i =1 ; i<n ;i++){
    if(arr[i]<min){
        min=arr[i];
         min_index=i;
    }

}
long long temp=arr[max_index];
arr[max_index]=arr[min_index];
arr[min_index]=temp;


for(int i =0 ; i<n ;i++){
    printf("%lld\t",arr[i]);
}





        
    return 0;
}