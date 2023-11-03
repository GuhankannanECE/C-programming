#include <stdio.h>

int main() {
    int n, x;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements of the array separated by spaces: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the value of 'x': ");
    scanf("%d", &x);

    int count[n];  // Array to store the count results

    for (int i = 0; i < n; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        int sum = a[i] + x;
        for (int j = 0; j < n; j++) {
            if (sum == a[j]) {
                count[i]++;
            }
        }
    }

    printf("Output: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", count[i]);
    }
    printf("\n");

    return 0;
}