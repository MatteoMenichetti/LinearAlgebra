#include <stdio.h>

void printResult(int rowA, int colB, const int matr[rowA][colB]) {
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colB; j++)
            printf("|| matr[%d][%d] = %d || ", i, j, matr[i][j]);
        printf("\n");
    }
}

int sum(int *a, int rowB, int colB, int j, int b[rowB][colB]) {
    int c = 0, limiter = rowB;
    for (int i = 0; i < limiter; i++) {
        c += a[i] * b[i][j];
    }
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
    printResult(rowA, colB, AB);
}

/*int main() {

    int a[2][3] = {1, 0, 2, 0, 3, -1}, b[3][2] = {4, 1, -2, 2, 0, 3};

    mul(2, 3, a, 3, 2, b);

    int c[3][3] = {1, 0, 1, 1, 5, -1, 3, 2, 0}, d[3][2] = {7, 1, 1, 0, 0, 4};

    mul(3, 3, c, 3, 2, d);
    return 0;
}
*/