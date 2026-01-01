#include <stdio.h>

int main() {
    int i, j, isPrime;

    for (i = 2; i <= 100; i++) {
        if (i > 60)
            break;    

        isPrime = 1;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;           
            }
        }

        if (isPrime)
            continue;        

        printf("%d ", i);
    }

    return 0;
}
