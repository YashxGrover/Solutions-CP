#include <stdio.h>

int main() {
    // Your code goes here
    int a , b , c;
    scanf("%d %d %d",&a,&b,&c);

   int arr[3]={a,b,c};
int temp =0;
    for (int i =0; i<2 ;i++){
        for (int j =0 ; j<3-1-i ;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i =0 ; i<3 ; i++){
        printf("%d\n",arr[i]);
    }
    printf("\n");

    printf("%d\n",a);
     printf("%d\n",b);
      printf("%d",c);

    return 0;
}