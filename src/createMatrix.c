#include "../lib/operation.h"
#include "../lib/indexing.h"

int **createMatrix(int row, int column) {

    if (row == 0 || column == 0)return 0;

    int **matrix = (int **) calloc(column + 2, sizeof(int));
    for (int i = 0; i < column + 2; i++) {
        matrix[i] = (int *) calloc(row, sizeof(int));
    }

    *matrix[ROWP] = row + 1; // + 1 perché la prima riga effettiva della matrice sono indirizzi a vettori
    *matrix[COLP] = column + 2; // + 2 perché i primi due elementi memorizzano la dimensione della matrice
    return matrix;
}