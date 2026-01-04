#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

int main() {
    struct Complex c1, c2, sum, diff, prod, div;
    float denom;

   
    printf("Enter real and imaginary part of first complex number: ");
    scanf("%f %f", &c1.real, &c1.imag);

    
    printf("Enter real and imaginary part of second complex number: ");
    scanf("%f %f", &c2.real, &c2.imag);

    
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;

   
    diff.real = c1.real - c2.real;
    diff.imag = c1.imag - c2.imag;

   
    prod.real = (c1.real * c2.real) - (c1.imag * c2.imag);
    prod.imag = (c1.real * c2.imag) + (c1.imag * c2.real);

   
    denom = (c2.real * c2.real) + (c2.imag * c2.imag);
    div.real = ((c1.real * c2.real) + (c1.imag * c2.imag)) / denom;
    div.imag = ((c1.imag * c2.real) - (c1.real * c2.imag)) / denom;

 
    printf("\nSum = %.2f + %.2fi", sum.real, sum.imag);
    printf("\nDifference = %.2f + %.2fi", diff.real, diff.imag);
    printf("\nProduct = %.2f + %.2fi", prod.real, prod.imag);
    printf("\nDivision = %.2f + %.2fi\n", div.real, div.imag);

    return 0;
}
