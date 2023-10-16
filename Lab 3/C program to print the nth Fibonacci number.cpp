#include <stdio.h>

int main() {
    int n;
    int first = 0, second = 1, next;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Fibonacci numbers are not defined for negative values of n.\n");
    } else if (n == 0) {
        printf("The %dth Fibonacci number is %d\n", n, first);
    } else if (n == 1) {
        printf("The %dth Fibonacci number is %d\n", n, second);
    } else {
        for (int i = 2; i <= n; i++) {
            next = first + second;
            first = second;
            second = next;
        }
        printf("The %dth Fibonacci number is %d\n", n, first);
        //first rather than second because fibonacci series :0,1,1,2,3,5... 
    }

    return 0;
}
