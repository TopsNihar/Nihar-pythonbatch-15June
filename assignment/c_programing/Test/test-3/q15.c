// Create a C program that finds the largest and smallest elements in a matrix.
#include <stdio.h>

#define row 3
#define col 3

int main() {
    int matrix[row][col];
    int i, j;
    int large, small;

    printf("enter the 6 element:\n", row, col);
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    large = small = matrix[0][0];

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if (matrix[i][j] > large) {
                large = matrix[i][j];
            }
            if (matrix[i][j] < small) {
                small = matrix[i][j];
            }
        }
    }

    printf("large matrix: %d\n", large);
    printf("small matrix: %d\n", small);

    return 0;
}
