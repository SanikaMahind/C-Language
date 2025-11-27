#include <stdio.h>

int main() {
    int x, y;
    long long result = 1;  
    int i = 0;

    printf("Enter base (x): ");
    scanf("%d", &x);

    printf("Enter exponent (y): ");
    scanf("%d", &y);

    while (i < y) {
        result = result * x;
        i++;
    }

    printf("%d^%d = %lld\n", x, y, result);

    return 0;
}
