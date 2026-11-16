#include <stdio.h>
#include <string.h>
#define max 10000005

char str[max];

int main() {
    scanf("%s", str);
    int len = strlen(str);

    
    for (char ch = 'a'; ch <= 'z'; ch++) {
        
        int freq = 0; 
        
        for (int i = 0; i < len; i++) {
            if (str[i] == ch) {
                freq++;
            }
        }
        
        
        if (freq > 0) {
            printf("%c : %d\n", ch, freq);
        }
    }

    return 0;
}
