#include "../lib/operation.h"


/*void printResult(int rowA, int colB, const int matr[rowA][colB]) {
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colB; j++)
            printf("|| matr[%d][%d] = %d || ", i, j, matr[i][j]);
        printf("\n");
    }
}*/

int main() {
    int a[2][3] = {1, 0, 2, 0, 3, -1}, b[3][2] = {4, 1, -2, 2, 0, 3}, AB[2][2];

    multiplication(2, 3, a, 3, 2, b, AB);

    int c[3][3] = {1, 0, 1, 1, 5, -1, 3, 2, 0}, d[3][2] = {7, 1, 1, 0, 0, 4}, CD[3][2];

    multiplication(3, 3, c, 3, 2, d, CD);

    int c1[2][3] = {1, 0, 2, 0, 3, -1}, ApC[2][3];

    sum(2,3,a,c1,ApC);

    return 0;
}
