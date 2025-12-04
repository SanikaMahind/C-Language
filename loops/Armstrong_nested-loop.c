#include <stdio.h>

int main() {
    int start, end;

    printf("Enter start of range: ");
    scanf("%d", &start);

    printf("Enter end of range: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (int num = start; num <= end; num++) {   
        int temp = num;
        int digits = 0;

        for (int i = temp; i > 0; i /= 10) {
            digits++;
        }

        temp = num;
        int sum = 0;

        
        for (int i = temp; i > 0; i /= 10) {
            int digit = i % 10;

            
            int power = 1;
            for (int j = 1; j <= digits; j++) { 
                power *= digit;
            }

            sum += power;
        }

       
        if (sum == num) {
            printf("%d ", num);
        }
    }

    return 0;
}
