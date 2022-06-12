#include "../lib/operation.h"

int **createMatrix(int row, int column) {

    if (row == 0 || column == 0)return 0;

    int **matrix = (int **) calloc(row + 2, sizeof(int));
    for (int i = 0; i < row + 2; i++) {
        matrix[i] = (int *) calloc(column + 1, sizeof(int));
    }
    *matrix[0] = row;
    *matrix[1] = column;
    return matrix;
}