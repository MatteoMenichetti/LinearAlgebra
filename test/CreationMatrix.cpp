#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../src/createMatrix.c"

void comparison(int **matrix, int row, int column) {
    ASSERT_NE(matrix, nullptr);
    ASSERT_EQ(column + 2, matrix[0][COLP]);
    ASSERT_EQ(row, matrix[0][ROWP]);

    free(matrix);
}

TEST(creationMatrix, testMatrix0Col0Row) {
    ASSERT_THAT(createMatrix(0, 0), testing::IsNull());
    ASSERT_THAT(createMatrix(0, 1), testing::IsNull());
    ASSERT_THAT(createMatrix(1, 0), testing::IsNull());
}

TEST(creationMatrix, testMatrix1Row) {
    int row = 1, column = 3, **matrix = createMatrix(row, column);

    comparison(matrix, row, column);
}


TEST(creationMatrix, testMatrix1Col) {
    int row = 3, column = 1, **matrix = createMatrix(row, column);

    comparison(matrix, row, column);
}

TEST(creationMatrix, testMatrixNRowMCol) {
    int row = 30, column = 25, **matrix = createMatrix(row, column);

    comparison(matrix, row, column);

    row = 25, column = 30, matrix = createMatrix(row, column);

    comparison(matrix, row, column);
}