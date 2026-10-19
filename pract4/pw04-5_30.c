#include <stdio.h>

double mb_to_gb(double mb) {
    const double COEFF = 1024.0;
    return mb/COEFF;
}