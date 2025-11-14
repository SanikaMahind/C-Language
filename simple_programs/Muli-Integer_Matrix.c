#include <stdio.h>

int main() {
    int r, c, i, j, num;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    int mat[r][c];

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Enter the integer to multiply: ");
    scanf("%d", &num);

    printf("\nResultant Matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            mat[i][j] = mat[i][j] * num;
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
