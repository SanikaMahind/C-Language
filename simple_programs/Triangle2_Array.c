#include <stdio.h>

int main() {
    int rows, i, j, number = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    int triangle[rows][rows];

   
    for(i = 0; i < rows; i++) {
        for(j = 0; j <= i; j++) {
            triangle[i][j] = number++;
        }
    }

    
    printf("Floyd's Triangle:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j <= i; j++) {
            printf("%3d ", triangle[i][j]);
        }
        printf("\n");
    }

    return 0;
}
