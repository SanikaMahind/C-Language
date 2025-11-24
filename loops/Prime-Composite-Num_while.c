#include <stdio.h>

int main() {
    int num, i = 2, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

   
    if (num < 2) {
        printf("%d is neither prime nor composite.\n", num);
        return 0;
    }

    while (i <= num / 2) {
        if (num % i == 0) {
            count = 1; 
            break;
        }
        i++;
    }

    if (count == 0)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is a composite number.\n", num);

    return 0;
}
