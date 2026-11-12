#include <stdio.h>

#define SIZE 5
 // размер должен быть нечетным, чтобы был четкий центр

int main(void) {
    char matrix[SIZE][SIZE];
    
    // заполняю матрицу пробелами
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrix[i][j] = ' ';
        }
    }

    // начало из центра
    int y = SIZE / 2;
    int x = SIZE / 2;
    matrix[y][x] = '*';

    // направления движения: вправо, вниз, влево, вверх
    int dx[] = {1, 0, -1, 0};
    int dy[] = {0, 1, 0, -1};
    
    int dir = 0;         // текущее направление
    int step_size = 2;   // длина шага

    while (x >= 0 && x < SIZE && y >= 0 && y < SIZE) {
        
        for (int i = 0; i < step_size; i++) {
            x += dx[dir];
            y += dy[dir];
            
            (x >= 0 && x < SIZE && y >= 0 && y < SIZE) && (matrix[y][x] = '*');
        }

        // меняю направление на следующее по кругу
        dir = (dir + 1) % 4;

        // каждые два поворота (после движения влево и после движения вверх) 
        // увеличиваю длину шага на 2, чтобы спираль расширялась
        step_size += (dir % 2 == 0) * 2;
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}