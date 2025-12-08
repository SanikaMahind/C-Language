#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Number must be greater than 1.\n");
        return 0;
    }

    for (i = 2; i <= n; i++) {
        if (n % i == 0) {
            printf("Smallest divisor of %d (greater than 1) is: %d\n", n, i);
           break;
        }
    }

    return 0;
}
