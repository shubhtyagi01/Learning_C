//Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, original, firstDigit, lastDigit, digits, swappedNum;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    
    digits = (int)log10(num);

    
    firstDigit = num / (int)pow(10, digits);

    
    lastDigit = num % 10;

    
    int middlePart = num % (int)pow(10, digits); 
    middlePart = middlePart / 10; 

    
    swappedNum = lastDigit * (int)pow(10, digits) + middlePart * 10 + firstDigit;

    printf("Original number: %d\n", original);
    printf("Number after swapping first and last digits: %d\n", swappedNum);

    return 0;
}
