#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;  // Extract the last digit
        sum += digit;      // Add the digit to the sum
        num /= 10;         // Remove the last digit from the number
    }

    printf("The sum of the digits is: %d\n", sum);

    return 0;
}
