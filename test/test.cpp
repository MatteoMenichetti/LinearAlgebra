#include <gtest/gtest.h>
#include "../src/createMatrix.c"

TEST(Test, creationOfMatrix) {
    int row = 2, column = 3, **matrix = createMatrix(row, column);
    int testRow = *matrix[0], testCol = *matrix[1];
    EXPECT_EQ(row, testRow);
    ASSERT_EQ(column, testCol);
    free(matrix);
}