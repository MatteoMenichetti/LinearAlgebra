#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../src/createMatrix.c"

void comparison(int **matrix, int column, int row) {
    EXPECT_EQ(column + 2, *matrix[1]);
    EXPECT_EQ(row + 1, *matrix[0]);
    free(matrix);
}

TEST(createMatrix, testMatrix0Col0Row) {
    ASSERT_THAT(createMatrix(0, 0), testing::IsNull());
    ASSERT_THAT(createMatrix(0, 1), testing::IsNull());
    ASSERT_THAT(createMatrix(1, 0), testing::IsNull());
}

TEST(creationMatrix, testMatrix1Row) {
    int row = 1, column = 3, **matrix = createMatrix(row, column);

    comparison(matrix, column, row);
}


TEST(creationMatrix, testMatrix1Col) {
    int row = 3, column = 1, **matrix = createMatrix(row, column);

    comparison(matrix, column, row);
}

TEST(creationMatrix, testMatrixNRowMCol) {
    int row = 30, column = 25, **matrix = createMatrix(row, column);

    comparison(matrix, column, row);

    row = 25, column = 30, matrix = createMatrix(row, column);

    comparison(matrix, column, row);
}