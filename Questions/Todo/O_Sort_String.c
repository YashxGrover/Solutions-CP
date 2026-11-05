#include <stdio.h>
#include <string.h>

int main() {
    // Your code goes here
    long long  n;
    scanf("%lld",&n);
    char str[n];
    scanf("%s",str);

char temp;
    for(int i =0 ; i< n-1 ; i++){
  for(int j =0 ; j<n-1-i ; j++){
    if(str[j]>str[j+1]){
        temp=str[j];
        str[j]=str[j+1];
        str[j+1]=temp;
     }
   }
  }
puts(str);

    return 0;
}