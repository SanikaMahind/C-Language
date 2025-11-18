#include <stdio.h>

int main() {
    int n, i = 1;
    long long sum = 0;

    printf("Enter value of n: ");
    scanf("%d", &n);

    while (i <= n) {
        sum += i * i; 
        i++;
    }

    printf("Sum of squares of first %d numbers = %lld\n", n, sum);
    
    return 0;
}
