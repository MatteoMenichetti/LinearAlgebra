#include "../../lib/operation.h"
#include "../../lib/indexing.h"

int multiplication_sum(int r, int **matrixA, int **matrixB, int **matrixP) {
    for (int i = 0; i < matrixA[COLP][0];i++)
        return 0;
}

int **multiplication(int **matrixA, int **matrixB) {
    if (matrixA[COLP][0] != matrixB[ROWP][0] || matrixA[ROWP][0] != matrixB[COLP][0])return 0;
    if (matrixA[ROWP][0] == matrixB[COLP][0]) {
        int **matrixSwap = matrixA;
        matrixA = matrixB;
        matrixB = matrixSwap;
    }
    int **matrixP = createMatrix(matrixA[COLP][0], matrixA[COLP][0]);
    for (int r = 0; r < matrixA[COLP][0]; r++)
        multiplication_sum(r, matrixA, matrixB, matrixP);

    return 0;
}