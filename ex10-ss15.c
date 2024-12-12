#include <stdio.h>
#include <string.h>

void Num(char str[]) {
    int count[256] = {0}; 
    int i;
    
    for (i = 0; i < strlen(str); i++) {
        count[str[i]]++;
    }
    
    for (i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("%c: %d\n", i, count[i]);
        }
    }
}

int main() {
    char str[] = "bcdaca";
    
    Num(str);
    
    return 0;
}

