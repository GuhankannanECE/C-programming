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

    int firstNonRepeating = -1;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == 1 && (firstNonRepeating == -1 || i < firstNonRepeating)) {
            firstNonRepeating = i;
        }
    }

    if (firstNonRepeating != -1) {
        printf("The first non-repeating element is: %d\n", arr[firstNonRepeating]);
    } else {
        printf("No non-repeating element found.\n");
    }

    return 0;
}
