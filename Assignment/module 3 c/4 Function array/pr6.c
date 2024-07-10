//WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array
#include <stdio.h>

#define ROWS 3
#define COLS 3

void addMatrix(int A[ROWS][COLS], int B[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

void subtractMatrix(int A[ROWS][COLS], int B[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
}

void multiplyMatrix(int A[ROWS][COLS], int B[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = 0;
            for (int k = 0; k < COLS; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[ROWS][COLS] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[ROWS][COLS];

    printf("Matrix 1:\n");
    displayMatrix(matrix1);
    printf("\n");

    printf("Matrix 2:\n");
    displayMatrix(matrix2);
    printf("\n");

    printf("Addition:\n");
    addMatrix(matrix1, matrix2, result);
    displayMatrix(result);
    printf("\n");

    printf("Subtraction:\n");
    subtractMatrix(matrix1, matrix2, result);
    displayMatrix(result);
    printf("\n");

    printf("Multiplication:\n");
    multiplyMatrix(matrix1, matrix2, result);
    displayMatrix(result);

    return 0;
}
