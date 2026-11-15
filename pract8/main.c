#include <stdio.h>
#include <stdlib.h>
#include "myfunc.h"

int main(void) {
    int *arr = NULL;
    size_t size_mas1 = 0;
    char choice;

    do {
        printf("МЕНЮ\n");
        printf("a\tЗадать размер массива\n");
        printf("b\tЗаполнить массив\n");
        printf("c\tПредставление массива\n");
        printf("d\tfuncia5\n");
        printf("e\tfuncia20\n");
        printf("f\tfuncia21\n");
        printf("g\tВыход\n");
        printf("Выберите пункт:");

        if (scanf(" %c", &choice)!=1) {
            printf("Ошибка!\n");
            break;
        }

        switch (choice) {
            case 'a':
                printf("Выбран пункт а. Задайте размер:");
                scanf("%zu", &size_mas1);
                arr = malloc(size_mas1 * sizeof(int));
                if (arr==NULL) {
                    printf("Память не выделилась\n");
                }
                else
                    printf("Массив успешно создан\n");
                break;
            case 'b':
                printf("Выбран пункт b\n");
                printf("Введите элементы массива:");
                if (arr==NULL) {
                    printf("Сначала задайте размер (пункт a)\n");
                    break;
                }
                else
                    for (size_t i = 0; i < size_mas1; i++){
                        scanf("%d", arr + i);
                    }
                break;
            case 'c':
                printf("Выбран пункт c\n");
                if (arr==NULL) {
                    printf("Сначала задайте размер (пункт a)\n");
                    break;
                }
                else
                    printf("Индекс\tЗначение\tАдрес\n");
                    for (size_t i = 0; i < size_mas1; i++) {
                        printf("%zu\t%-5d\t%5p\n", i, *(arr + i), arr + i);
                    }
                break;
            case 'd':
                printf("Выбран пункт d\n");
                if (arr==NULL) {
                    printf("Сначала задайте размер (пункт a)\n");
                    break;
                }
                else {
                    int k;
                    printf("Введите число (k): ");
                    scanf("%d", &k);
                    size_t *mass2 = malloc(size_mas1 * sizeof(size_t));
                    int count = func5(arr, size_mas1, k, mass2);
                    if (count == 0) {
                        printf("Элементов меньше %d не найдено.\n", k);
                    }
                    else {
                        printf("Индексы элементов меньше %d: ", k);
                        for (int i=0; i<count; i++) {
                            printf("%zu ", *(mass2 + i));
                        }
                        printf("\n");
                    }
                    free(mass2);
                }
                break;
            case 'e':
                printf("Выбран пункт e\n");
                if (arr==NULL) {
                    printf("Сначала задайте размер (пункт a)\n");
                    break;
                }
                else {
                    int k;
                    printf("Введите число (k): ");
                    scanf("%d", &k);
                    int res = func20(arr, size_mas1, k);
                    printf("Количество элементов больше %d: %d\n", k, res);
                break;
                }
            case 'f':
                printf("Выбран пункт f\n");
                if (arr==NULL) {
                    printf("Сначала задайте размер (пункт a)\n");
                    break;
                }
                else {
                    int k;
                    printf("Введите число (k): ");
                    scanf("%d", &k);
                    int res_sum = func21(arr, size_mas1, k);
                    printf("Сумма элементов меньше %d: %d\n", k, res_sum);
                break;
                }
            case 'g':
                printf("Выход\n");
                break;
            
            default:
                printf("Ошибка. Введите a-g\n");
                break;
        }

    }
    while(choice!='g');
    free(arr);
    return 0;
}