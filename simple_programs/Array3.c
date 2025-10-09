

#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int smallest, largest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    smallest = largest = arr[0];

    
    for(i = 1; i < n; i++) {
        if(arr[i] < smallest)
            smallest = arr[i];
        if(arr[i] > largest)
            largest = arr[i];
    }

    printf("\nSmallest element = %d", smallest);
    printf("\nLargest element = %d\n", largest);

    return 0;
}
