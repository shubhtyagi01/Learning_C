//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main() {
    float a, b, c;


    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Side lengths must be positive numbers.\n");
        return 1;
    }

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        
        if (a == b && b == c) {
            printf("The triangle is Equilateral.\n");
        } else if (a == b || b == c || a == c) {
            printf("The triangle is Isosceles.\n");
        } else {
            printf("The triangle is Scalene.\n");
        }
    } else {
        
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}
