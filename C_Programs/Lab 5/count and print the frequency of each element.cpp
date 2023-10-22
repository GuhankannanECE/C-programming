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

    int visited[n];

    for (int i = 0; i < n; i++) {
        visited[i] = -1;
    }

    for (int i = 0; i < n; i++) {
        int count = 1;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 0;
            }
        }

        if (visited[i] != 0) {
            visited[i] = 1;
            printf("Element %d occurs %d times\n", arr[i], count);
        }
    }

    return 0;
}
