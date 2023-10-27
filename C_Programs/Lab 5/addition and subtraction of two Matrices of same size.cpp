#include <stdio.h>

int main() {
    int row, col;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);

    int matrix1[row][col], matrix2[row][col], sum[row][col], difference[row][col];
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            difference[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    printf("Sum of matrices:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    printf("Difference of matrices:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", difference[i][j]);
        }
        printf("\n");
    }

    return 0;
}
