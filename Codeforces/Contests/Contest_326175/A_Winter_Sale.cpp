#include <iostream>

using namespace std;

int main() {
    double x, p;
    cin >> x >> p;
    double original_price = p / (1.0 - x / 100.0);
    
    int total_cents = original_price * 100 + 0.5;
    int whole = total_cents / 100;
    int cents = total_cents % 100;
    
    cout << whole << ".";
    if (cents < 10) {
        cout << "0";
    }
    cout << cents << endl;
    
    return 0;
}
