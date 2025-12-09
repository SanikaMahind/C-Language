#include <stdio.h>

int main() {
    int N, i;

    printf("Enter value of N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) { 

        if (i % 3 == 0) {
            continue;  
        }

        printf("%d ", i);
        
        if (i == 100) {
            break;  
        }
    }

    return 0;
}
