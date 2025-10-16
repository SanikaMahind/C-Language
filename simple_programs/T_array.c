#include <stdio.h>

int main() {
    int n, i, j;
    char arr[50][50]; 

    printf("Enter number of rows for the triangle: ");
    scanf("%d", &n);

    
    for(i = 0; i < n; i++) {
        for(j = 0; j < 2 * n - 1; j++) {
            if(j >= n - 1 - i && j <= n - 1 + i)
                arr[i][j] = '*';
            else
                arr[i][j] = ' ';
        }
    }


    for(i = 0; i < n; i++) {
        for(j = 0; j < 2 * n - 1; j++)
            printf("%c", arr[i][j]);
        printf("\n");
    }

    return 0;
}
