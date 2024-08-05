#include <stdio.h>
void inputmatrix(int mat[][100], int rows, int cols) {
    printf("enter elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}
void displaymatrix(int mat[][100], int rows, int cols) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
void addmatrices(int mat1[][100], int mat2[][100], int result[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
void subtractmatrices(int mat1[][100], int mat2[][100], int result[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}
void multiplymatrices(int mat1[][100], int mat2[][100], int result[][100], int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
int main() {
    int rows1, cols1, rows2, cols2;

    printf("enter for row 1: "); 
    scanf("%d", &rows1);

    printf("enter for column 1: "); 
    scanf("%d", &cols1);


    int matrix1[100][100];
    inputmatrix(matrix1, rows1, cols1);

    printf("enter for row 2: ");
    scanf("%d", &rows2);

    printf("enter for column 2: "); 
    scanf("%d", &cols2);

    int matrix2[100][100];
    inputmatrix(matrix2, rows2, cols2);

    if (rows1 == rows2 && cols1 == cols2) {
        int addresult[100][100];
        addmatrices(matrix1, matrix2, addresult, rows1, cols1);
        printf("Addition:\n");
        displaymatrix(addresult, rows1, cols1);
    } else {
        printf("\nMatrices not added"); 
    }

    if (rows1 == rows2 && cols1 == cols2) {
        int subresult[100][100];
        subtractmatrices(matrix1, matrix2, subresult, rows1, cols1);
        printf("Subtraction:\n");
        displaymatrix(subresult, rows1, cols1);
    } else {
        printf("\nMatrices not subtracted"); 
    }

    if (cols1 == rows2) {
        int multresult[100][100];
        multiplymatrices(matrix1, matrix2, multresult, rows1, cols1, cols2);
        printf("Multiplication:\n");
        displaymatrix(multresult, rows1, cols2);
    } else {
        printf("\nMatrices not multiplied"); 
    }

    return 0;
}
