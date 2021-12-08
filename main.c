#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define RANDOM rand() % (10)
#define INITIALIZE srand(time(NULL))

#define DIMR 3
#define DIMC DIMR

/* 1    2   3       9   8   7   6
 * 4    5   6       5   4   3   2
 * 7    8   9       1   0   -1  -2
 */

void mul(int rowA, int colA, int a[rowA][colA], int rowB, int colB, int b[rowB][colB]) {
    if(colA!=rowB)return;
    //???
}

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
    int col = RANDOM, a[DIMR][DIMC], b[DIMC][col];
    createMatrix(DIMR, DIMC, a);
    createMatrix(DIMC, col, b);

    mul(DIMR, DIMC, a, DIMC, col, b);

    return 0;
}
