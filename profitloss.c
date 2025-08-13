#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profit, loss;

    // Input cost price and selling price
    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);

    // Nested if to determine profit or loss
    if (sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
        printf("Profit: %.2f\n", profit);
    } else {
        if (sellingPrice < costPrice) {
            loss = costPrice - sellingPrice;
            printf("Loss: %.2f\n", loss);
        } else {
            printf("No Profit, No Loss\n");
        }
    }

    return 0;
}
