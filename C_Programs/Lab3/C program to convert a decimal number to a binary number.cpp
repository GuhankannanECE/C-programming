#include <stdio.h>

int main()
{
    int decimalNum;
    long long binaryNum = 0;
    int remainder, base = 1;

    // Input the decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    // Convert decimal to binary
    while (decimalNum > 0) {
        remainder = decimalNum % 2;
        binaryNum += remainder * base;
        decimalNum /= 2;
        base *= 10;
    }

    printf("Binary representation: %lld\n", binaryNum);

    return 0;
}

