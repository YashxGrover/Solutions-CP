#include <stdio.h>

int main() {
    // YoYkW/array/ur code goes here
      int n;
   
    if((scanf("%d\n",&n))!=1 || n<=0){
        return 0;
    }
 long long a[n];


    for(int i=0;i<n;i++){
scanf("%lld",&a[i]);
    }
long long *start = &a[0];
long long *end = &a[n-1];
long long temp;
while(start<end){
    temp=*start;
    *start=*end;
*end=temp;
start++;
end--;
}
for(int i=0;i<n;i++){
    printf("%lld\t",a[i]);
}

    return 0;
}