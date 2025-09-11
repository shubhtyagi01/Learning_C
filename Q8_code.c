//Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    
    if (n <= 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }

    
    for (i = 1; i <= n; i++) {
        sum += i;
    }


    printf("Sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
