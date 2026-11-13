#include <stdio.h>
#include <math.h>

double ras_modul(double a, double b) {
    return fabs(fabs(a) - fabs(b));
}
int main() {
    double a,b;
    int ch;
    printf("Введите пары чисел (Ctrl+D - завершить);\n");
    ch = getchar();
    while (ch!=EOF && ch!='#') {
        ungetc(ch, stdin);
        
        if (scanf("%lf %lf", &a, &b)==2){
            double res = ras_modul(a, b);
            printf("Разность модулей: %.4f\n", res);
        }
        else {
            printf("Введите строго две пары ЧИСЕЛ:\n");
            while ((ch = getchar())!='\n' && ch!=EOF);
        }
        ch = getchar();
    }
    return 0;
}