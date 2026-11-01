#include <stdio.h>
int main(void) {
    int num;
    int count_in = 0, count_out = 0;
    int sum_in = 0, sum_out = 0;
    printf("Введите числа (0 для завершения):\n");
    scanf("%d", &num);
    while (num !=0) {
        if (num >=10 && num <=50) {
            count_in++;
            sum_in+= num;
        }
        else {
            count_out++;
            sum_out+= num;
        }
        scanf("%d", &num);
    }
    printf("\n В диапазоне [10; 50] \n");
    printf("Количество: %d\n", count_in);
    if (count_in > 0) {
        double avg_in = (double)sum_in / count_in;
        printf("Среднее арифметическое: %.2f\n", avg_in);
    }
    else
    printf("Среднее арифметическое: нет данных\n");

    printf("\n Вне диапазоне \n");
    printf("Количество: %d\n", count_out);
    if (count_out > 0) {
        double avg_out = (double)sum_out / count_out;
        printf("Среднее арифметическое: %.2f\n", avg_out);
    }
    else
    printf("Среднее арифметическое: нет данных\n");

    return 0;
}
//Ленивое вычисление — это когда && не проверяет вторую часть условия, если первая уже ложна.

// && - Если первое условие — ложь, то каким бы ни было второе, результат всё равно
//будет ложь. Поэтому компьютер останавливается и не проверяет второе условие.

// || - Если первое условие — истина, то каким бы ни было второе, результат всё равно буде истина.
//Поэтому компьютер останавливается и не проверяет второе условие.