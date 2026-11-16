#include <stdio.h>

int main() {
    // Your code goes here
    int n;
    if(scanf("%d",&n)!=1 || n<=0){
        return 0;
    }
    int arr[n];
 for(int i=0; i<n; i++){
scanf("%d",&arr[i]);}


for (int i =0 ; i<n-1 ;i++){
int min=i;
    for(int j =i+1 ;j<n ;j++){
        if (arr[min]>arr[j]){
            min=j;
    }
    
        }
 int temp= arr[i];
            arr[i]=arr[min];
            arr[min]=temp;

}
     for(int i=0; i<n; i++){
printf("%d\t",arr[i]);}


    return 0;
}