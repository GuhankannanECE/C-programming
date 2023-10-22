#include <stdio.h>

int main() {
    int n, x;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the sorted array in ascending order:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to find the ceiling for: ");
    scanf("%d", &x);

    int ceiling = -1; // Initialize ceiling to an invalid value

    for (int i = 0; i < n; i++) {
        if (arr[i] >= x) {
            ceiling = arr[i];
            break;
        }
    }

    if (ceiling != -1) {
        printf("The ceiling of %d is: %d\n", x, ceiling);
    } else {
        printf("No ceiling found for %d in the array.\n", x);
    }

    return 0;
}
