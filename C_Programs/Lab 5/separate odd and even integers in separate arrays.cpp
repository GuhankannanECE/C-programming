#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int originalArray[n];
    int oddArray[n], evenArray[n];

    int oddCount = 0, evenCount = 0;

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &originalArray[i]);

        if (originalArray[i] % 2 == 0) {
            evenArray[evenCount] = originalArray[i];
            evenCount++;
        } else {
            oddArray[oddCount] = originalArray[i];
            oddCount++;
        }
    }

    printf("Odd integers: ");
    for (int i = 0; i < oddCount; i++) {
        printf("%d ", oddArray[i]);
    }

    printf("\nEven integers: ");
    for (int i = 0; i < evenCount; i++) {
        printf("%d ", evenArray[i]);
    }

    return 0;
}
