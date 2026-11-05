#include <stdio.h>

int main() {
    // Your code goes here
    int t;
    if(scanf("%d",&t)!=1 || t<1 || t>100){
        return 0;
    }

for(int l =0 ; l<t ; l++){

    int n ;

     if(scanf("%d",&n)!=1 || n<2 || n>1000){
        return 0;}
    

int arr[n];

for (int p =0 ; p<n ; p++){
    if(scanf("%d",&arr[p])!=1 || arr[p]>2 || arr[p]<1){
        return 0;
    }
}


int twos=0;

for (int i =0 ; i<n ;i++){
    if(arr[i]==2){
        twos++;
    }
}



if(twos==0){
    printf("1\n");
    continue;
}



if(!(twos%2==0)){
    printf("-1\n");
    continue;
}

else {

    if(n%2==0 && n==twos){
        printf("%d\n",n/2);
        continue;
    }

for (int k =1 ; k<=n-1 ;k++){
    int twosfirstside=0;
  


      for (int j =0; j<=k-1 ; j++){
        if (arr[j]==2){
            twosfirstside++;
        }
      }

     if(twosfirstside==twos/2){
        printf("%d\n",k);
        break;
     }

       }
     } 
   }

    return 0;
}