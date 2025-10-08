#include <stdio.h>

int main()
{
    int n = 3;
    int A[n][n];
    int row, col;


    printf("Enter elements of a 3x3 matrix:\n");
    for (row = 0; row < n; row++)
    {
        for (col = 0; col < n; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }
    printf("\nThe matrix is:\n");
    for (row = 0; row < n; row++)
    {
        for (col = 0; col < n; col++)
        {
            printf("%d ", A[row][col]);
        }
        printf("\n");
    }

    return 0;
}
