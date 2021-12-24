void sum(int row, int col, int A[row][col], int B[row][col], int ApB[row][col]) {
    for (int r = 0; r < row; r++)for (int c = 0; c < col; c++)ApB[r][c] = A[r][c] + B[r][c];
}