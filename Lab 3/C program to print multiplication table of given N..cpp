#include <stdio.h>

int main() {
    int N;

    // Input the number for which you want to print the multiplication table
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &N);

    // Display the multiplication table for N
    printf("Multiplication table for %d:\n", N);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", N, i, N * i);
    }

    return 0;
}
