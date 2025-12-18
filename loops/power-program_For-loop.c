#include <stdio.h>

int main() {
    int x, y;
    long long result = 1;

    printf("Enter base (x): ");
    scanf("%d", &x);

    printf("Enter exponent (y): ");
    scanf("%d", &y);

    for (int i = 1; i <= y; i++) {
        result = result * x;
    }

    printf("%d^%d = %lld\n", x, y, result);

    return 0;
}
