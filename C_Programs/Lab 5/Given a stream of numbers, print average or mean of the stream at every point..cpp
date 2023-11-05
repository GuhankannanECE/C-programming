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

        sum += num;  
        float average = sum / i; 
        printf("%.2f ", average); 
		printf("\n");
    }

    printf("\n");

    return 0;
}
