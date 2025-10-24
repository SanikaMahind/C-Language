#include <stdio.h>

int main() {
    int a[10][10];
    int row, col, i, j;
    int rowSum, colSum;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nMatrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\nRow-wise Sum:\n");

    for (i = 0; i < row; i++) {
        rowSum = 0;
        for (j = 0; j < col; j++) {
            rowSum += a[i][j];
        }
        printf("Sum of Row %d = %d\n", i + 1, rowSum);
    }

    printf("\nColumn-wise Sum:\n");

    for (j = 0; j < col; j++) {
        colSum = 0;
        for (i = 0; i < row; i++) {
            colSum += a[i][j];
        }

        printf("Sum of Column %d = %d\n", j + 1, colSum);
    }

    return 0;
}
