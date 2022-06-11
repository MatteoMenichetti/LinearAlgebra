#include "../lib/operation.h"

int **createMatrix(int row, int column) {
    int **matrix = (int **) calloc(row + 2, sizeof(int));
    matrix[0] = &row;
    matrix[1] = &column;
    for (int i = 2; i < row + 2; i++) {
        matrix[i] = (int *) calloc(column + 1, sizeof(int));
    }
    return matrix;
}