#include <stdio.h>
#include <string.h>

void Num(char str[], char ch) {
    int i, j = 0;
    int len = strlen(str);
    for (i = 0; i < len; i++) {
        if (str[i] != ch) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char str[] = "hello world, o";
    char ch;
    
    printf("Nhap ky tu can xoa: ");
    scanf("%c", &ch);
    
    Num(str, ch);
    
    printf("Chuoi sau khi thay doi: %s\n", str);
    
    return 0;
}

