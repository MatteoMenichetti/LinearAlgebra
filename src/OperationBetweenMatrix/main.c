#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define RANDOM rand() % (10)
#define INITIALIZE srand(time(NULL))

#define DIMR 2
#define DIMC 3

/* 1    0   2       4   1
 * 0    3   -1      -2  2
 *                  0   3
 *      4   7
 *      -6  3
 * AB ha tante righe quante A e tante colonne quante B
 */

int mult(int *a, int *b, int colA, int rowB) {
    int n = a;
}

void mul(int rowA, int colA, int a[rowA][colA], int rowB, int colB, int b[rowB][colB]) {
    if (colA != rowB)return;
    int *n=a[1],cc=0,cr=0;
    int c[rowA][colB];
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colB; j++)
            for(int k=0;k<colA;k++)c[cr][cc]+=a[i][k]*b[k][j];
    }
    n[1];
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
    int row = RANDOM, a[DIMR][DIMC], b[row][DIMR];
    createMatrix(DIMR, DIMC, a);
    createMatrix(row, DIMR, b);

    mul(DIMR, DIMC, a, DIMC, row, b);

    return 0;
}
