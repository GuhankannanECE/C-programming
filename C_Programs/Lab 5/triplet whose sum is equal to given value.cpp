#include <stdio.h>

int main() {
    int n, target_sum;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target sum: ");
    scanf("%d", &target_sum);

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == target_sum) {
                    printf("Triplet: %d, %d, %d\n", arr[i], arr[j], arr[k]);    
                }
            }
        }
    }

    printf("No triplet found for the given sum.\n");
    return 0;
}
