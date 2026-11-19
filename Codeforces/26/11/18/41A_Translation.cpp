#include <iostream>
#include <string>
using namespace std;

int main() {
    // Your code goes here
    string s,t;
int c=0;
    cin>> s>> t;

    if(s.length()!=t.length()){
        cout<< "NO";
        return 0;

    }
bool rev=true;
    for(int i =0 ; i<s.length() ; i++){
        if(s[i]!=t[t.length()-1-i]){
            rev=false;
        }
    }
    if(rev){
        cout<<"YES";
    }
else{
    cout<< "NO";
}
    
    return 0;
}