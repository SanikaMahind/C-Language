#include <stdio.h>

int main() {
    int age;
    float salary;
    int creditScore;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter monthly salary: ");
    scanf("%f", &salary);

    printf("Enter credit score: ");
    scanf("%d", &creditScore);

    
    if ((age >= 21 && age <= 60) && (salary >= 25000) && (creditScore >= 700)) {
        printf("Loan Status: APPROVED\n");

    } else if ((salary >= 40000 && creditScore >= 650) || creditScore >= 750) {
        printf("Loan Status: APPROVED (Special Case)\n");

    } else if (!(age >= 21 && age <= 60)) {
        printf("Loan Status: REJECTED (Age not eligible)\n");

    } else {
        printf("Loan Status: RE
