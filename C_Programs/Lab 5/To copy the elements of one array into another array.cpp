#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int sourceArray[n], destinationArray[n];

    printf("Enter the elements of the source array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &sourceArray[i]);
    }

    // Copy elements from the sourceArray to destinationArray
    for (int i = 0; i < n; i++) {
        destinationArray[i] = sourceArray[i];
    }

    printf("Elements copied from sourceArray to destinationArray.\n");

    printf("Source Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", sourceArray[i]);
    }

    printf("\nDestination Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", destinationArray[i]);
    }

    return 0;
}
