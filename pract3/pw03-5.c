#include <stdio.h>

int main(void) {
    char symbol =' ';
    scanf("%c", &symbol);
    printf("CODE_DEX: %i\n", symbol);
    printf("CODE_HEX: %x\n", symbol);
    printf("CODE_OCT: %o\n", symbol);
    printf("UPPER: %c\n", symbol-32);
    printf("NEXT: %c\n", symbol+1);
    printf("PREV: %c\n", symbol-1);
    return 0;
}