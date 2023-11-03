#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n % 2 != 0) {
        printf("The array must have an even number of elements.\n");
        return 1;
    }

    int a[n];
    printf("Enter the elements of the array separated by spaces: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int firstHalfSum = 0;
    int secondHalfSum = 0;

    // Calculate the sum of the first and second halves
    for (int i = 0; i < n / 2; i++) {
        firstHalfSum += a[i];
        secondHalfSum += a[i + n / 2];
    }

    int minAddition;

    if (firstHalfSum > secondHalfSum) {
        minAddition = firstHalfSum - secondHalfSum;
    } else {
        minAddition = secondHalfSum - firstHalfSum;
    }

    printf("Minimum value to add to balance the array: %d\n", minAddition);

    return 0;
}