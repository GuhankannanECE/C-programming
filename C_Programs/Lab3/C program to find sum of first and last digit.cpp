#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, sum;
    printf("Enter an integer: ");
    scanf("%d", &num);
    lastDigit = num % 10;
    while (num >= 10) {
        num /= 10;
    }
    firstDigit = num;
    sum = firstDigit + lastDigit;
    printf("The sum of the first and last digits is: %d\n", sum);

    return 0;
}
