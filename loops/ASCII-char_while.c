#include <stdio.h>

int main() {
    int ascii = 65;

    while (ascii <= 90) { 
        printf("%c = %d\n", ascii, ascii);
        ascii++;
    }

    return 0;
}
