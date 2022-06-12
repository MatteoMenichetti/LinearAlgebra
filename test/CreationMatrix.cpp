#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../src/createMatrix.c"

void comparison(int **matrix, int column, int row) {
    EXPECT_EQ(column, *matrix[1]);
    EXPECT_EQ(row, *matrix[0]);
    free(matrix);
}

TEST(creationMatrix, testMatrix1Row) {
    int row = 1, column = 3, **matrix = createMatrix(row, column);

    comparison(matrix, column, row);
}


TEST(creationMatrix, testMatrix1Col) {
    int row = 3, column = 1, **matrix = createMatrix(row, column);

    comparison(matrix, column, row);
}