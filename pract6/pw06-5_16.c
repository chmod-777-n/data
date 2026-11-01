#include <stdio.h>
#include <math.h>

int main(void) {
    int choice;
    double num, result;

    while (1) {
        printf("\n Калькулятор степеней \n");
        printf("1. Квадрат числа\n");
        printf("2. Куб числа\n");
        printf("3. Корень квадратный\n");
        printf("4. Корень кубический\n");
        printf("5. Выход\n");
        printf("Выберите пункт (1-5): ");
        
        scanf("%d", &choice);

        if (choice < 1 || choice > 5) {
            printf("Ошибка! Введите число от 1 до 5.\n");
            continue;
        }

        if (choice == 5) {
            printf("Выход из программы.\n");
            break;
        }

        printf("Введите число: ");
        scanf("%lf", &num);

        switch (choice) {
            case 1:
                result = num * num;
                printf("Квадрат числа %.2f = %.4f\n", num, result);
                break;
            case 2:
                result = num * num * num;
                printf("Куб числа %.2f = %.4f\n", num, result);
                break;
            case 3:
                if (num < 0) {
                    printf("Ошибка: корень из отрицательного числа!\n");
                } else {
                    result = sqrt(num);
                    printf("Квадратный корень из %.2f = %.4f\n", num, result);
                }
                break;
            case 4:
                result = cbrt(num);
                printf("Кубический корень из %.2f = %.4f\n", num, result);
                break;
        }
    }

    /* 
     * Если забыть оператор break в одном из case, произойдет "проваливание" (fall-through).
     * Программа выполнит код текущего case, а затем пойдет дальше и выполнит код 
     * СЛЕДУЮЩЕГО case, даже если условие для него не подходит. Это приведет к 
     * неправильным вычислениям и выводу лишней информации на экран.
     */
    return 0;
}