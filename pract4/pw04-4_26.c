#include <stdio.h>

int main(void) {
    int a, b;
    printf("Введите два числа для поиска: ");
    scanf("%d %d", &a, &b);

    int original_a = a;
    int original_b;

    while (b!=0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    int gcd = a;
    int lcm = (original_a * original_b)/gcd;
    printf("HOK(%d, %d) = %d\n", original_a, original_b, lcm);
    return 0;
}