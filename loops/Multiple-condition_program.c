#include <stdio.h>

int main() {
    int i, j, isPrime, count = 0;

    for (i = 2; i <= 200; i++) {

        if (i >= 50 && i <= 70)
            continue;

        if (i >= 150)
            break;

        isPrime = 1;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime && (i % 10 == 3 || i % 10 == 7)) {
            printf("%d ", i);
            count++;
        }
    }

    printf("\nTotal count = %d", count);

    return 0;
}
