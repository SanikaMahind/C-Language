#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int num = i;
        printf("%d = ", i);

        if (i == 1) {
            printf("1");
        } else
             {
            for (int p = 2; p <= num; p++) {      
                while (num % p == 0) {              
                    printf("%d", p);
                    num /= p;
                    if (num != 1)
                        printf(" × ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
