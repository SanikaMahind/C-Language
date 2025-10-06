#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  // Add each element to sum
    }
    avg = sum / n;
    printf("\nSum = %.2f", sum);
    printf("\nAverage = %.2f\n", avg);

    return 0;
}
