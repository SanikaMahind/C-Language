#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = n + 1; ; i++) {
        if (i % 11 == 0) {
            printf("The first number greater than %d divisible by 11 is %d\n", n, i);
            break;
        }
    }

    return 0;
}
