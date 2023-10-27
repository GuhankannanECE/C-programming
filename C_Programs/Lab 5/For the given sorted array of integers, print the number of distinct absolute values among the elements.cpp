#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the sorted array of integers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int distinctCount = 0;
    int previous = arr[0] + 1;

    for (int i = 0; i < n; i++) {
        if (abs(arr[i]) != previous) {
            distinctCount++;
        }
        previous = abs(arr[i]);
    }

    printf("Number of distinct absolute values in the array: %d\n", distinctCount);

    return 0;
}
