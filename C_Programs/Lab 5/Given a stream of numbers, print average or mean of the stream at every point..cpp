#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the stream: ");
    scanf("%d", &n);

    int sum = 0;

    for (int i = 1; i <= n; i++) {
        int num;
        printf("Enter element %d: ", i);
        scanf("%d", &num);

        sum += num;  // Add the new number to the sum
        float average = (float)sum / i;  // Calculate the running average
        printf("%.2f ", average); 
		printf("\n"); // Print the running average with two decimal places
    }

    printf("\n");

    return 0;
}