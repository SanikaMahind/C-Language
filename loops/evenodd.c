#include <stdio.h>

int main() {
    int i;

    printf("Enter the number: ");
    scanf("%d", &i);
        

    for (i=0; i<10; i++) {
        if (i % 2 == 0) {
            printf("%d is even\n", i);
        } else {
            printf("%d is odd\n", i);
        }
    }

    return 0;
}
