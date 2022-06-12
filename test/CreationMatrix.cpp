#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../src/createMatrix.c"

TEST(creationMatrix, testMatrix1Row) {
    int row = 1, column = 3, **matrix = createMatrix(row, column);
    EXPECT_THAT(column, testing::Eq(*matrix[1]));
    EXPECT_THAT(row, testing::Eq(*matrix[0]));
    free(matrix);
}

TEST(creationMatrix, testMatrix1Col){
    int row=3, column = 1;

}