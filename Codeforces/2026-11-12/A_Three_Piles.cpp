#include <iostream>
using namespace std;

int main() {
    // Your code goes here
    int t;
    cin >> t;
    while (t--){

int a,b,c;
cin >>a>>b>>c;



if(a-1==b+1 && b+1==c)
cout<<"yes\n";
else if(a-1==b && b==c+1)
cout<<"yes\n";
else if(a==b-1 && b-1==c+1)
cout<<"yes\n";
else if(a+1==b-1 && b-1==c)
cout<<"yes\n";
else if(a==b+1 && b+1==c-1)
cout<<"yes\n";
else if(a+1==b && b==c-1)
cout<<"yes\n";

else 
cout<<"No\n";

    }
    return 0;
}