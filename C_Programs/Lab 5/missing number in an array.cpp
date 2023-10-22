#include <stdio.h>

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    
    int arr[N - 1];
    
    printf("Enter %d integers in the range [1, %d]:\n", N - 1, N);
    
    for (int i = 0; i < N - 1; i++) {
        scanf("%d", &arr[i]);
    }
    
    int expected_sum = N * (N + 1) / 2;
    int actual_sum = 0;
    
    for (int i = 0; i < N - 1; i++) {
        actual_sum += arr[i];
    }
    
    int missing_number = expected_sum - actual_sum;
    
    printf("The missing number is: %d\n", missing_number);
    
    return 0;
}
