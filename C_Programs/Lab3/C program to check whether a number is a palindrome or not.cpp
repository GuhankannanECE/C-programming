#include <stdio.h>

int main() {
    int num, reversedNum = 0, originalNum, remainder;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num; // Store the original number

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum) {
        printf("%d is a palindrome number.\n", originalNum);
    } else {
        printf("%d is not a palindrome number.\n", originalNum);
    }

    return 0;
}
