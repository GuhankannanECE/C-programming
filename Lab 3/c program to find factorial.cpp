#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1;

    // Input the number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if the input is a negative number
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate the factorial
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }

        // Print the factorial
        printf("The factorial of %d is %llu\n", n, factorial);
    }

    return 0;
}
