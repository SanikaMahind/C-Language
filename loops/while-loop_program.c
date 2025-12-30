#include <stdio.h>

int main() {
    int num;

    printf("Enter numbers (loop stops if number is 13 or >100):\n");

    while (1) {
        scanf("%d", &num);

        if (!(num > 0 && num != 13 && num <= 100)) {
            break;
        }

        printf("Accepted: %d\n", num);
    }

    return 0;
}
