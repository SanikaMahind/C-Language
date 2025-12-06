#include <stdio.h>

int main() {
    int num, i, j, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

   
    for (i = 1; i < num; i++) {

       for (j = 1; j <= 1; j++) {  
            if (num % i == 0) {
                sum += i;
            }
        }
    }

    if (sum == num)
        printf("%d is a Perfect Number.\n", num);
    else
        printf("%d is NOT a Perfect Number.\n", num);

    return 0;
}
