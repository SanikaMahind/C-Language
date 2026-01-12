#include <stdio.h>

int main() {
    int number, attempts = 3;

    printf("Guess the number (1–10)\n");

    while (attempts > 0 && number != 5) {
        printf("Enter your guess: ");
        scanf("%d", &number);

        attempts--;

        if (number != 5) {
            printf("Wrong guess! Attempts left: %d\n", attempts);
        }
    }

    if (number == 5) {
        printf("Correct! You guessed it.\n");
    } else {
        printf("Out of attempts!\n");
    }

    return 0;
}
