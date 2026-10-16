#include <stdio.h>
#include <wchar.h>
#include <string.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");  
    const char str_char[] = "Сбой матрицы";
    const wchar_t str_wchar[] = L"Cбой матрицы";
    printf("char-> sizeof: %zu bytes, strlen: %zu chars\n", sizeof(str_char), strlen(str_char));
    printf("wchar->sizeof: %zu bytes, wcslen: %zu chars\n", sizeof(str_wchar), wcslen(str_wchar));
    return 0;
}