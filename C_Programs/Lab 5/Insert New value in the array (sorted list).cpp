#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the sorted list: ");
    scanf("%d", &n);

    int sortedList[n + 1];
    printf("Enter the elements of the sorted list: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &sortedList[i]);
    }

    int newValue;
    printf("Enter the value to be inserted: ");
    scanf("%d", &newValue);

   
    int position = n;
    for (int i = 0; i < n; i++) {
        if (newValue < sortedList[i]) {
            position = i;
            break;
        }
    }

    for (int i = n; i > position; i--) {
        sortedList[i] = sortedList[i - 1];
    }
    sortedList[position] = newValue;

    n++; 

    printf("After inserting, the list is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", sortedList[i]);
    }

    return 0;
}
