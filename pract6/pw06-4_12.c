#include <stdio.h>
int main(void) {
    double sales;
    double bonus = 0.0;
    double total_bonus = 0.0;

    printf("Введите объем продаж: ");
    scanf("%lf", &sales);

    if (sales <= 20000) {
        bonus = 0.02; // 2%
    } 
    else if (sales > 20000 && sales <= 100000) {
        bonus = 0.03; // 3%
    } 
    else {
        bonus = 0.05; // 5% свыше 100000
    }

    total_bonus = sales * bonus;

    printf("\nИсходная сумма продаж: %.2f\n", sales);
    printf("Тарифная ступень: ");
    if (bonus == 0.02) {
        printf("до 20000 (2%%)\n");
    } else if (bonus == 0.03) {
        printf("от 20000 до 100000 (3%%)\n");
    } else {
        printf("свыше 100000 (5%%)\n");
    }
    printf("Итоговый бонус: %.2f\n", total_bonus);

    return 0;
}
//double имеет более высокую точность (15-17 значащих цифр, у float 6-7)
//В денежных расчетах недопустимы потери точности, так как ошибки округления 
//приведут к неправильному расчету бонусов и итоговых сумм.