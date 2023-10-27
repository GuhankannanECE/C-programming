#include <stdio.h>

int main() {
    int N, sum = 0;
    // Input the value of N
    printf("Enter the value of N: ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        sum += i;
    }
    printf("The sum of the first %d natural numbers is: %d\n", N, sum);

    return 0;
}
