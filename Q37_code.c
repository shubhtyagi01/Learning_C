//Write a program to find the LCM of two numbers.

#include <stdio.h>

int main() {
    int num1, num2, a, b, temp, gcd, lcm;

    
    
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    
    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers only.\n");
        return 1;
    }

    
    a = num1;
    b = num2;

    
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;

    
    lcm = (num1 * num2) / gcd;

    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}
