#include <stdio.h>

int main() {
    int N;
    printf("Enter N: ");
    scanf("%d", &N);

    int i;

    for (i = N; i >= 1; i--) {

     
        if (i % 2 != 0) {
            continue; 
        }

      
        if (i % 12 == 0) {
            printf("The number is: %d\n", i);
            break;    
        }
    }

    return 0;
}
