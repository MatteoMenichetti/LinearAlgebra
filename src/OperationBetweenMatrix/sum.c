#include "../../lib/operation.h"
#include "../../lib/indexing.h"

void sumMatrix(int **A, int **B, int **ApB) {
    for (int r = 0; r < *A[ROWP]; r++)
        for (int c = 0; c < *A[COLP]; c++)
            ApB[ROW(r)][COL(c)] = A[ROW(r)][COL(c)] + B[ROW(r)][COL(c)];
}

int **sum(int **a, int **b) {
    if (*a[ROWP] != *b[ROWP] || *a[COLP] != *b[COLP]) {
        perror("matrix with != numbers of row || column");
        exit(EXIT_FAILURE);
    }
    int **ApB = createMatrix(*a[0], *a[1]);
    sumMatrix(a, b, ApB);
    return ApB;
}