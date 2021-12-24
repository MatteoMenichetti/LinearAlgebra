int multiplication_sum(const int *a, int rowB, int colB, int j, int b[rowB][colB]) {
    int c = 0, limiter = rowB;
    for (int i = 0; i < limiter; i++)
        c += a[i] * b[i][j];
    return c;
}

void multiplication(int rowA, int colA, int a[rowA][colA], int rowB, int colB, int b[rowB][colB], int AB[rowA][colB]) {
    if ((colA != rowB))return;
    int colAB = 0, rowAB = 0;
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colB; j++)
            AB[rowAB][colAB++] = multiplication_sum(&a[i][0], rowB, colB, j, b);
        rowAB++;
        colAB = 0;
    }
}