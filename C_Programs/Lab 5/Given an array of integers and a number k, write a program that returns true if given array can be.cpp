#include <stdio.h>

int main() {
    int n, k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements of the array separated by spaces: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the value of 'k': ");
    scanf("%d", &k);

    int remainder[k];
    for (int i = 0; i < k; i++) {
        remainder[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        int rem = (a[i] % k + k) % k;  // Ensure remainder is non-negative
        remainder[rem]++;
    }

    if (remainder[0] % 2 != 0) {
        printf("False\n");
    } else {
        int i = 1;
        int j = k - 1;

        while (i <= j) {
            if (remainder[i] != remainder[j]) {
                printf("False\n");
                return 0;
            }
            i++;
            j--;
        }
        printf("True\n");
    }

    return 0;
}
