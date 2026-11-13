#include <stdio.h>

void proezved_chastnoe(double *a, double *b) {
    double original_a = *a;
    double original_b = *b;

    *a = original_a * original_b;
    *b = original_a / original_b;
}

int main() {
    double x, y;

    printf("Введите первое число (x): ");
    if (scanf("%lf", &x) != 1) {
        printf("Ошибка ввода!\n");
        return 1;
    }

    printf("Введите второе число (y): ");
    if (scanf("%lf", &y) != 1) {
        printf("Ошибка ввода!\n");
        return 1;
    }

    printf("Исходные значения\n");
    printf("x = %.2f, y = %.2f\n", x, y);

    if (y != 0) {
        proezved_chastnoe(&x, &y);
        
        printf("Измененные значения\n");
        printf("x (произведение) = %.2f\n", x);
        printf("y (частное) = %.2f\n", y);
    } else {
        printf("\nОшибка: Деление на ноль невозможно (y = 0)!\n");
    }

    return 0;
}