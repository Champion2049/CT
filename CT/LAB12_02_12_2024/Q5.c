#include <stdio.h>

void main() {
    char table[10];
    printf("Enter the values:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%c", &table[i]);
    }
    for (int i = 0; i < 10; i++) {
        printf("%c", table[i]);
    }
    printf("\n");
    table[10] = '\0';
    printf("%s\n", table);
}

