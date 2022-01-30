#include "../../lib/operation.h"

void sum1(int row, int col, int **A, int **B, int **ApB) {
    for (int r = 2; r < row+2; r++)for (int c = 0; c < col; c++)ApB[r][c] = A[r][c] + B[r][c];
}

int **sum(int **a, int **b) {
    if (*a[0] != *b[0] || *a[1] != *b[1]) {
        perror("matrix with != numbers of row || column");
        exit(EXIT_FAILURE);
    }
    int **ApB = createMatrix(*a[0],*a[1]);
    sum1(*a[0], *a[1], a, b, ApB);
    return ApB;
}