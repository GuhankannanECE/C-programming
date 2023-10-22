#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the sorted list: ");
    scanf("%d", &n);

    int sortedList[n + 1]; // Increase the size by 1 for the new value

    printf("Enter the elements of the sorted list: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &sortedList[i]);
    }

    int newValue;
    printf("Enter the value to be inserted: ");
    scanf("%d", &newValue);

    // Find the position to insert the new value
    int position = n;
    for (int i = 0; i < n; i++) {
        if (newValue < sortedList[i]) {
            position = i;
            break;
        }
    }

    // Shift elements to make space for the new value
    for (int i = n; i > position; i--) {
        sortedList[i] = sortedList[i - 1];
    }

    // Insert the new value
    sortedList[position] = newValue;

    n++; // Increase the size of the list

    printf("After inserting, the list is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", sortedList[i]);
    }

    return 0;
}
