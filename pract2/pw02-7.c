#include <stdio.h>

int main(void) {
    long double ld;
    scanf("%Lf",&ld);
    double d = ld;
    float f = ld;

    printf("FLOAT: %.6f\n", f);
    printf("DOUBLE: %.6f\n", d);
    printf("LDOUBLE: %.6Lf\n", ld);
    printf("FLOAT+1: %.6f\n", f+1);
    printf("DOUBLE+1: %.6f\n", d+1);
    printf("LDOUBLE+1: %.6Lf\n", ld+1);

    return 0;
}