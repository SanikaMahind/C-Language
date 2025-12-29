#include <stdio.h>

int main() {
    int arr[6] = {5, -3, 7, -1, 0, 9};
    int i;

    for (i = 0; i < 6; i++) {
        if (arr[i] < 0) {
            continue;   
        }
        printf("%d ", arr[i]);
    }

    return 0;
}
