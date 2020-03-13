#include <stdio.h>

void printStr(char *str) {
    if (*str != '\0')
        printStr(str + 1);
    if (*str != '\0')
        printf("%c", *str);
}

void main() {
    char str[100];
    gets(str);
    printStr(str);
}