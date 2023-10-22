#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the list: ");
    scanf("%d", &n);

    int unsortedList[n + 1]; // Increase the size by 1 for the new value

    printf("Enter the elements of the list: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &unsortedList[i]);
    }

    int newValue;
    printf("Enter the value to be inserted: ");
    scanf("%d", &newValue);

    int position;
    printf("Enter the position where the value will be inserted: ");
    scanf("%d", &position);

    // Check if the specified position is valid
    if (position < 1 || position > n + 1) {
        printf("Invalid position\n");
        return 1;
    }

    // Shift elements to make space for the new value
    for (int i = n; i >= position; i--) {
        unsortedList[i] = unsortedList[i - 1];
    }

    // Insert the new value
    unsortedList[position - 1] = newValue;

    n++; // Increase the size of the list

    printf("After inserting, the new list is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", unsortedList[i]);
    }

    return 0;
}
