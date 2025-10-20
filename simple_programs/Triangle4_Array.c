#include <stdio.h>

int main() {
    int rows = 5;
    char triangle[10][10];

    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i; j++) {
            triangle[i][j] = '*';
        }
    }

    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i; j++) {
            printf("%c ", triangle[i][j]);
        }
        printf("\n");
    }

    return 0;
}
