#include <stdio.h>

int main() {
    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
                                           // Skip numbers ending with 5
        if (i % 10 == 5) {
            continue;
        }
        printf("%d ", i);
    }

    return 0;
}
