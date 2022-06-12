//randomization will be for column cause the matrix is organized in column
#include <time.h>
#include <stdlib.h>

int randomize(int **matrix) {
    int n;
    srand(time(NULL));   // Initialization, should only be called once.
    for (int i = 2; i < *matrix[1]; i++) {
        for (int j = 0; j < *matrix[0]; j++) {
            n = rand();
            matrix[i][j] = n;
        }
    }
    return 0;
}