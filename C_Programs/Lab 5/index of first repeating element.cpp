#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    const int MAX = 100000; // Assuming a maximum range for array elements

    int firstIndex[MAX];
    for (int i = 0; i < MAX; i++) {
        firstIndex[i] = -1;
    }

    int firstRepeatingIndex = -1;

    for (int i = 0; i < n; i++) {
        if (firstIndex[arr[i]] == -1) {
            firstIndex[arr[i]] = i;
        } else {
            if (firstRepeatingIndex == -1 || firstRepeatingIndex > firstIndex[arr[i]]) {
                firstRepeatingIndex = firstIndex[arr[i]];
            }
        }
    }

    if (firstRepeatingIndex == -1) {
        printf("No repeating element found.\n");
    } else {
        printf("The first repeating element is at index: %d\n", firstRepeatingIndex);
    }

    return 0;
}
