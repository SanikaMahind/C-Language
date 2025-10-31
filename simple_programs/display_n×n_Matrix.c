#include <stdio.h>

int main() {
    int n;

    
    printf("Enter the dimension (n) of the n x n matrix: ");
    scanf("%d", &n);

    
    int matrix[n][n];

    
    printf("Enter the elements of the matrix (%d x %d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

  
    printf("\nThe entered matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
