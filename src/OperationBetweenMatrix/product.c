#include <stdio.h>

int sum(const int *a, int rowB, int colB, int j, int b[rowB][colB]) {
    int c = 0, limiter = rowB;
    for (int i = 0; i < limiter; i++)
        c += a[i] * b[i][j];
    return c;
}

void mul(int rowA, int colA, int a[rowA][colA], int rowB, int colB, int b[rowB][colB]) {
    if ((colA != rowB))return;
    int colAB = 0, rowAB = 0;
    int AB[rowA][colB];
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colB; j++)
            AB[rowAB][colAB++] = sum(&a[i][0], rowB, colB, j, b);
        rowAB++;
        colAB = 0;
    }
}