#include <iostream>
using namespace std;

int main() {
    // Your code goes here
    int t;
    cin >> t;
    while(t--){

        int n;
        cin >>n;
        string s;
        cin>> s;

        char start='R';
        int switc=0;

        for(auto c:s){
            if (start!=c){
                switc++;
            }
            start= (c=='R') ? 'B' :'R';
        }
        cout<<switc<<endl;
       
    }
    return 0;
}