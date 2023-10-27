#include <stdio.h>

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    if (N < 2) {
        printf("There are no even numbers between 1 and %d\n", N);
    } else {
        printf("Even numbers between 1 and %d are:\n", N);
        for (int i = 2; i <= N; i += 2) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}
