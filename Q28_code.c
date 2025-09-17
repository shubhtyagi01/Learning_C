//Write a program to print the product of even numbers from 1 to n.


#include <stdio.h>

int main() {
    int n, i;
    unsigned long long product = 1; 
    int foundEven = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("No even numbers in the given range.\n");
    } else {
        printf("Even numbers from 1 to %d:\n", n);
        for (i = 2; i <= n; i += 2) {
            printf("%d ", i);
            product *= i;
            foundEven = 1;
        }
        printf("\n");

        if (foundEven)
            printf("Product of even numbers from 1 to %d = %llu\n", n, product);
    }

    return 0;
}
