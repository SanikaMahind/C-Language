#include <stdio.h>

int main() {
    int num = 1;

    while (num <= 20 && num % 7 != 0) {
        printf("%d\n", num);
        num++;
    }

    printf("Loop stopped\n");
    return 0;
}
