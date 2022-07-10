#include "../lib/operation.h"
#include "../lib/indexing.h"

/*void printResult(int rowA, int colB, const int matr[rowA][colB]) {
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colB; j++)
            printf("|| matr[%d][%d] = %d || ", i, j, matr[i][j]);
        printf("\n");
    }
}*/
void assignmentValue(int **matrixA) {
    int i = 0;
    int testC1 = matrixA[COLP][0], testR1 = matrixA[ROWP][0];
    printf("matrixA[%d][%d] = %d\n", 0, COLP, matrixA[0][COLP]);
    printf("matrixA[%d][%d] = %d\n", 0, ROWP, matrixA[0][ROWP]);
    for (int c = 0; COL(c) < matrixA[0][COLP]; c++) {
        for (int r = 0; r < matrixA[0][ROWP]; r++) {
            int testC = COL(c), testR = ROW(r);
            matrixA[ROW(r)][COL(c)] = i++;
            printf("matrixA[%d][%d] = %d\n", ROW(r), COL(c), matrixA[ROW(r)][COL(c)]);
        }
    }
}

int main() {
    assignmentValue(createMatrix(3, 3));
    return 0;
}
