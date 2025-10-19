#include <stdio.h>

int main() {
    int rows, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    char triangle[rows][rows];

    for (i = 0; i < rows; i++) {
        for (j = 0; j < rows; j++) {
            if (j < rows - i - 1)
                triangle[i][j] = ' '; 
            else
                triangle[i][j] = '*';  
        }
    }

    
    for (i = 0; i < rows; i++) {
        for (j = 0; j < rows; j++) {
            printf("%c ", triangle[i][j]);
        }
        printf("\n");
    }

    return 0;
}
