#include <stdio.h>

int main() {
    int num, reversedNum = 0;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    printf("The reverse of the number is: %d\n", reversedNum);

    return 0;
}
