#include <stdio.h>
#include <stdint.h>

int main(void) {
    int input;
    scanf("%d", &input);

    uint8_t x = (uint8_t)input;
    uint8_t add = (uint8_t)(x+x);
    printf("ADD: %u\n", (unsigned int)add);
    uint8_t mul2 = (uint8_t)(x*2);
    printf("MUL2: %u\n", (unsigned int)mul2);
    uint8_t sqr = (uint8_t)(x*x);
    printf("SQR: %u\n", (unsigned int)sqr);

    return 0;
}