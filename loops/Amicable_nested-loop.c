#include <stdio.h>

int main() {
    int num1, num2;
    int i, j;
    int sum1 = 0, sum2 = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    
    for (i = 1; i < num1; i++) {
        if (num1 % i == 0) {
            sum1 += i;
        }
    }

    
    for (j = 1; j < num2; j++) {
        if (num2 % j == 0) {
            sum2 += j;
        }
    }

    
    if (sum1 == num2 && sum2 == num1)
        printf("%d and %d are amicable numbers.\n", num1, num2);
    else
        printf("%d and %d are NOT amicable numbers.\n", num1, num2);

    return 0;
}
