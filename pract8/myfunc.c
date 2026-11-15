#include "myfunc.h"

int func5(int *arrptr, size_t n, int k, size_t *mass_ind) {
    int count = 0;
    for (size_t i = 0; i<n; i++) {
        if (*(arrptr + i)<k) {
            *(mass_ind + count)=i;
            count++;
        }
    }
    return count;
}

int func20(int *arrptr, size_t n, int k) {
    int count = 0;
    for (size_t i=0; i<n; i++){
        if (*(arrptr + i) > k) {
            count++;
        }
    }
    return count;
}

int func21(int *arrptr, size_t n, int k) {
    int summ = 0;
    for (size_t i =0; i<n; i++){
        if (*(arrptr + i) < k) {
            summ+=*(arrptr + i);
        }
    }
    return summ;
}