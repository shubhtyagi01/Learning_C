//Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>
int main() {
    float costPrice, sellingPrice, profit, loss;
    printf("Enter the Cost Price: ");
    scanf("%f", &costPrice);
    printf("Enter the Selling Price: ");
    scanf("%f", &sellingPrice);
    if (sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
        printf("You made a profit of: %.2f\n", profit);
        printf("Profit Percentage: %.2f%%\n", (profit / costPrice) * 100);
    } else if (costPrice > sellingPrice) {
        loss = costPrice - sellingPrice;
        printf("You incurred a loss of: %.2f\n", loss);
        printf("Loss Percentage: %.2f%%\n", (loss / costPrice) * 100);
    } else {
        printf("No profit, no loss.\n");
    }
    
    return 0;
}