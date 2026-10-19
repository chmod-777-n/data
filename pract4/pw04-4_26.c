#include <stdio.h>

int main(void) {
    int a, b;
    printf("Введите два числа для поиска: ");
    scanf("%d %d", &a, &b);

    int orig_a = a;
    int orig_b = b;

    while (b!=0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    int nod = a;
    int nok = (orig_a * orig_b)/nod;
    printf("HOK(%d, %d) = %d\n", orig_a, orig_b, nok);
    return 0;
}
