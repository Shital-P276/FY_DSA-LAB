#include <stdio.h>

#define ROWS 3
#define COLS 3

void matrixSubtraction(int mat1[ROWS][COLS], int mat2[ROWS][COLS], int result[ROWS][COLS]) {
    int i, j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

void displayMatrix(int mat[ROWS][COLS]) {
    int i, j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[ROWS][COLS] = {{1, 2, 3},
                                {4, 5, 6},
                                {7, 8, 9}};
    int matrix2[ROWS][COLS] = {{9, 8, 7},
                                {6, 5, 4},
                                {3, 2, 1}};
    int result[ROWS][COLS];

    matrixSubtraction(matrix1, matrix2, result);

    printf("Matrix 1:\n");
    displayMatrix(matrix1);

    printf("\nMatrix 2:\n");
    displayMatrix(matrix2);

    printf("\nDifference of matrices:\n");
    displayMatrix(result);

    return 0;
}
