#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, sum;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Find the last digit
    lastDigit = num % 10;

    // Find the first digit by repeatedly dividing by 10 until there's only one digit left
    while (num >= 10) {
        num /= 10;
    }
    firstDigit = num;

    // Calculate the sum of the first and last digits
    sum = firstDigit + lastDigit;

    printf("The sum of the first and last digits is: %d\n", sum);

    return 0;
}
