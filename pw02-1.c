#include <stdio.h>

int main(void) {
    int dec;
    int hex;
    int oct;
    scanf("%d %x %o", &dec, &hex, &oct);
    printf("UNIT_ID: %d\n", dec);
    printf("UNIT_VERSION: %d\n", hex);
    printf("UNIT_STATUS: %d\n", oct);
    printf("SUM: %d\n", dec+hex+oct);
    return 0;
}