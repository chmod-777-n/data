#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <math.h>
int main(void) {
    setlocale(LC_ALL, "");
    wint_t ch;
    int square_count = 0;
    wprintf(L"Введите текст (# для завершения):\n");
    while ((ch = getwchar())!=L'#') {
        int code = (int)ch;
        if (code > 0) {
            double root = sqrt(code);
            if (root*root == code) {
                square_count++;
            }
        }
    }
    wprintf(L"\nКоличество символов-квадратов: %d\n", square_count);
    return 0;
}
// Функция getchar() читает ровно 1 байт. В кодировке UTF-8 кириллица 
//занимает 2 байта. Поэтому getchar() прочитает русскую букву как два 
//несвязанных между собой числовых значения (байта). 
//Это нарушает целостность символа и любые проверки кода символа 
//или вывод на экран будут ошибочными

//Функция getwchar() работает с типом wchar_t и считывает символ целиком,
//собирая байты в единое целое. Это гарантирует, что код любого Unicode-символа
//будет получен без искажений.