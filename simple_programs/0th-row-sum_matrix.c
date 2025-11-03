#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[100][100];
    printf("Enter elements of the matrix:         \n");

   
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    int sum = 0;
    for (int j = 0; j < cols; j++) {
        sum += matrix[0][j];
    }

    printf("Sum of elements in 0th row = %d\n", sum);

    return 0;
}
