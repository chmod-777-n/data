#include <stdio.h>
#include <stdlib.h>

#define SIZE 5  // Размер спирали (должно быть нечётное число)

int main() {
    // Создаём массив для хранения символов
    char matrix[SIZE][SIZE];

    // Инициализируем массив: сначала заполняем пробелами,
    // а потом будем заменять нужные позиции на '*'
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrix[i][j] = (i + j == 0 || i + j == SIZE - 1) ? '*' : ' ';
        }
    }

    // Координаты текущей позиции
    int row = 0, col = 0;

    // Направления движения: вправо, вниз, влево, вверх
    int directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}}; // право, вниз, лево, вверх
    int directionIndex = 0; [10](https://studassistent.ru/c/programma-kotoraya-budet-vyvodit-spiral-mozhno-simvolami-c-si)[6](https://rosettacode.org/wiki/Spiral_matrix)

    // Заполняем спираль
    while (directionIndex < 4) {
        int end = directions[directionIndex] + row;
        int start = directions[directionIndex] + col;  [1](https://tr-page.yandex.ru/translate?lang=en-ru&url=https%3A%2F%2Fstackoverflow.com%2Fquestions%2F73114458%2Fhow-to-make-spiral-asterisk-array-in-c-programming)

        // Заполняем текущую строку от левого к правому
        for (int j = col; j <= end && matrix[row][j] == '*'; j++) {
            matrix[row][j] = '*';
        }

        // Заполняем текущий столбец от верхнего к нижнему
        for (int i = row; i <= end && matrix[i][j] == '*'; i++) {
            matrix[i][j] = '*';
        }

        // Меняем направление
        directionIndex++;
    }

    // Выводим результат
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
