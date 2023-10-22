#include <stdio.h>

int main() {
    int matrix[3][3];

    printf("Enter the elements of the 3x3 matrix:\n");

    // Input elements into the matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The 3x3 matrix is:\n");

    // Print the matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}
