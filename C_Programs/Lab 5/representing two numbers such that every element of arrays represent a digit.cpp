#include <stdio.h>

int main() {
    int N, M;
    printf("Enter the number of digits in the first array (N): ");
    scanf("%d", &N);

    printf("Enter the number of digits in the second array (M): ");
    scanf("%d", &M);

    int A[N], B[M], sum[N + 1];
    
    printf("Enter the digits of the first number (from right to left): ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    
    printf("Enter the digits of the second number (from right to left): ");
    for (int i = 0; i < M; i++) {
        scanf("%d", &B[i]);
    }
    
    int carry = 0;  // Initialize carry to 0

    int i = N - 1, j = M - 1, k = N;

    // Add digits from right to left
    while (i >= 0 || j >= 0) {
        int x = (i >= 0) ? A[i] : 0;
        int y = (j >= 0) ? B[j] : 0;

        int sum_digit = x + y + carry;
        sum[k] = sum_digit % 10;  // Store the result in the sum array
        carry = sum_digit / 10;  // Calculate the carry for the next iteration

        i--;
        j--;
        k--;
    }

    // If there's a carry after adding all digits, store it as the most significant digit
    if (carry > 0) {
        sum[k] = carry;
        k--;
    }

    // Print the sum
    printf("Sum of the two numbers: ");
    for (int l = k + 1; l < N + 1; l++) {
        printf("%d", sum[l]);
    }
    printf("\n");

    return 0;
}