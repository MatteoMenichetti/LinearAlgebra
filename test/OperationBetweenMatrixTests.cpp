#include <gtest/gtest.h>
#include "../lib/operation.h"
#include "../lib/indexing.h"
#include "../src/OperationBetweenMatrix/sum.c"

TEST(OperationBetweenMatrixTests, sumBewtween1RowMatrix) {
    int row = 1, column = 3, **matrixA = createMatrix(row, column), **matrixB = createMatrix(row,
                                                                                             column), **matrixS;

    for (int c = 0; c < column - 2; c++) {
        for (int r = 0; r < row; r++) {
            matrixA[COL(c)][ROW(r)] = 1;
            matrixB[COL(c)][ROW(r)] = 2;
        }
    }

    int i = matrixA[COL(1)][0];
    i++;
    matrixS = sum(matrixA, matrixB);
    for (int c = 0; c < column - 2; c++)
        for (int r = 0; r < row; r++) {
            EXPECT_EQ(matrixA[COL(c)][ROW(r)] + matrixB[COL(c)][ROW(r)], matrixS[COL(c)][ROW(r)]);
            EXPECT_EQ(matrixS[COL(c)][ROW(r)], 3);
        }
    //modificare anche con la deallocazione dei vettori per ogni posizione dei matrixA/B/S
    free(matrixA);
    free(matrixB);
    free(matrixS);
}