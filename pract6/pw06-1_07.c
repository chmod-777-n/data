#include <stdio.h>
#include <ctype.h>

int main(void) {
    int ch;
    int word_count=0;
    int in_word=0;
    printf("Введите текст (# для завершения):\n");
    while ((ch = getchar())!='#') {
        if (!isspace(ch)) {
            if (in_word == 0) {
                word_count++;
                in_word  = 1;
            }
        }
        else
        in_word = 0;
    }
    printf("\nКоличество слов: %d\n", word_count);
    return 0;
}