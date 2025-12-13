#include <stdio.h>

int main() {
    int num;
    int sum = 0;

    do {
        printf("Enter a number : ");
        scanf("%d", &num);
        sum += num;
    } while (num != 0);

    printf("Sum of the entered numbers: %d\n", sum);

    return 0;
}
