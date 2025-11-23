#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i = 1;

    printf("Enter Fibonacci numbers to print: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    while (i <= n) 
      {
        if (i == 1) {
            printf("%d ", first);  
      }
          else if (i == 2) {
            printf("%d ", second); 
        } 
         else {
              next = first + second;
              printf("%d ", next);

            first = second;  
            second = next;
          }
        i++;
    }

    return 0;
}
