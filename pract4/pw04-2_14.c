#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint16_t q, t;
    scanf("%hu %hu", &q, &t);

    float res = (float)q/t;
    printf("Результат: %f\n", res);

    printf("Размер uint16_t: %llu байт\n", (unsigned long long)sizeof(uint16_t));
    printf("Размер float: %llu байт\n", (unsigned long long)sizeof(float));
    return 0;
}