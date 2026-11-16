#include <iostream>
using namespace std;

int sum(int a, int b);

int main() {
    // Your code goes here
    int x,y;
    cin>>x>>y;
    printf("%d",sum(x,y));
    return 0;
}



int sum(int a,int b ){
    int  sum=a+b;
    return sum;
}