#include <stdio.h>

void multiplication(int rowA, int colA, int a[rowA][colA], int rowB, int colB, int b[rowB][colB], int AB[rowA][colB]);

void sum(int row, int col, int A[row][col],int B[row][col], int ApB[row][col]);

int ** createMatrix (int row, int column);