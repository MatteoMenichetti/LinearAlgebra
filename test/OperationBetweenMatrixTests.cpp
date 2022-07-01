#include <gtest/gtest.h>
#include "../lib/operation.h"
#include "../lib/indexing.h"
#include "../src/OperationBetweenMatrix/sum.c"

void dealloc(int **matrixA, int **matrixB,
             int **matrixS) {
    free(matrixA);
    free(matrixB);
    free(matrixS);
}

void assignmentValue(int **matrixA, int **matrixB) {
    for (int c = 0; c < matrixA[COLP][0]; c++) {
        for (int r = 0; r < matrixA[ROWP][0]; r++) {
            int testC = COL(c), testR = ROW(r);
            matrixA[ROW(r)][COL(c)] = 1;
            matrixB[ROW(r)][COL(c)] = 2;
        }
    }

}

TEST(OperationBetweenMatrixTests, sumBewtween1RowMatrix) {

    int row = 1, column = 3, **matrixA = createMatrix(row, column), **matrixB = createMatrix(row,
                                                                                             column), **matrixS;
    assignmentValue(matrixA, matrixB);

    matrixS = sum(matrixA, matrixB);
    for (int c = 0; c < column - 2; c++)
        for (int r = 0; r < row; r++) {
            ASSERT_EQ(matrixS[ROW(r)][COL(c)], 3);
        }

    dealloc(matrixA, matrixB, matrixS);
}

