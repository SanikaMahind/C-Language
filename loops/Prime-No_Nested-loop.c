#include <stdio.h>

int main() {
    long long i, j;
    int isPrime;

    printf("Prime numbers between 1 and 1000000:\n");

    for (i = 2; i <= 1000000; i++) {
        isPrime = 1;                 

      
        for (j = 2; j * j <= i; j++;) 
            if (i % j == 0) {   
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%lld ", i);    
        }
    }

    return 0;
}
