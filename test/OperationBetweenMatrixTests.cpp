#include <gtest/gtest.h>
#include "../lib/operation.h"
#include "./randomizeValueMatrix.c"

TEST(OperationBetweenMatrixTests, sumBewtween1RowMatrix) {
    int row = 1, column = 3, **matrixA = createMatrix(1, 3), **matrixB= createMatrix(row, column);
    randomize(matrixA);
    int i = matrixA[2][0];
    i=matrixA[2][1];
    i++;
}