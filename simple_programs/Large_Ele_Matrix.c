#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows and           columns: ");
     scanf("%d %d", &rows, &cols);

    int matrix[100][100];
    printf("Enter elements of the matrix:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int max = matrix[0][0]; 

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }

    printf("The largest element in the matrix is: %d\n", max
