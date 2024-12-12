#include <stdio.h>
#include <string.h>

void FirstLetter(char str[]) {
    int i;
    if (str[0] != '\0' && str[0] >= 'a' && str[0] <= 'z') {
        str[0] = str[0] - 'a' + 'A'; 
    }
    for (i = 1; i < strlen(str); i++) {
        if (str[i - 1] == ' ' && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        }
    }
}

int main() {
    char str[] = "hello world";
    FirstLetter(str);
    printf("%s\n", str);
    return 0;
}

