#include "gtest/gtest.h"
#include "../lib/operation.h"

TEST(test, creationOfMatrix) {
    int row = 2, column = 3, **matrix = createMatrix(row, column);
    ASSERT_EQ(row, *matrix[0]);
    ASSERT_EQ(column, *matrix[1]);
}