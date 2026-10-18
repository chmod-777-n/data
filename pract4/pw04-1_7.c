#include <stdio.h>

#define COEFF 1000
int main(void) {
    int n;
    while (scanf("%u", &n) == 1 && n > 0) {
        int lo = n/COEFF;
        int ho = n%COEFF;
        printf("%u МГц %u кГц\n", lo, ho);
    }
    return 0;
}
// При целочисленном делении дробная часть отбрасывается, потому что
// тип int не хранит дробную часть