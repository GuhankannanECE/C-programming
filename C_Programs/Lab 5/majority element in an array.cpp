#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int majorityElement = -1;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (count == 0) {
            majorityElement = arr[i];
            count = 1;
        } else if (majorityElement == arr[i]) {
            count++;
        } else {
            count--;
        }
    }

    count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == majorityElement) {
            count++;
        }
    }

    if (count > n / 2) {
        printf("Majority element: %d\n", majorityElement);
    } else {
        printf("No majority element found\n");
    }

  return 0;
}
