#include <stdio.h>

int main() {
    int attempts = 0;
    int password, input;

    password = 1234;

    while (attempts < 3) {
        printf("Enter password: ");
        scanf("%d", &input);

        if (input == 0) {
            continue;  
        }

        if (input == password) {
            printf("Access granted\n");
            break;
        }

        printf("Wrong password\n");
        attempts++;
    }

    return 0;
}
