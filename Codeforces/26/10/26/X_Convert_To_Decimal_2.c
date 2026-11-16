#include <stdio.h>

int main() {
    // Your code goes here
    int t;
    int n;
   int bindig,final,binary;
scanf("%d",&t);
for (int i =0 ; i<t ; i++){
scanf("%d",&n);
final = 0;
binary = 1;

while (n > 0) {
    bindig = n % 2;   // 1. Get the last binary bit (0 or 1)
    n = n / 2;        // 2. Shift n right (divide by 2)
    
    if (bindig == 0) {
        continue;     // 3. If bit is 0, SKIP it entirely!
    }
    
    final = final + binary * bindig; // 4. Add the bit at the current new position
    binary = binary * 2;             // 5. Advance the weight: 1 -> 2 -> 4 -> 8...
}
printf("%d\n", final);
}
    return 0;
}