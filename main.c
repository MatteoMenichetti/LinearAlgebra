#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

#define RANDOM rand() % (10)
#define INITIALIZE srand(time(NULL))

#define DIML 3
#define DIMC DIML

void createMatrix(int row, int col, int m[row][col]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            m[i][j] = RANDOM;
            printf("|| a[%d][%d] = %d || ", i, j, m[i][j]);
        }
        printf("\n");
    }
}

int main() {
    INITIALIZE;
    int col = 6, a[DIML][DIMC], b[DIMC][col];
    createMatrix(DIML, DIMC, a);
    createMatrix(DIMC, col, b);

    return 0;
}