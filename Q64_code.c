//Find the digit that occurs the most times in an integer number.


#include <stdio.h>
#include <stdlib.h>

int main() {
    long long number;
    int digitCount[10] = {0}; 

    printf("Enter an integer number: ");
    scanf("%lld", &number);


    number = llabs(number);

    
    while (number > 0) {
        int digit = number % 10;
        digitCount[digit]++;
        number /= 10;
    }

    
    int maxCount = 0;
    int mostFrequentDigit = 0;

    for (int i = 0; i < 10; i++) {
        if (digitCount[i] > maxCount) {
            maxCount = digitCount[i];
            mostFrequentDigit = i;
        }
    }

    printf("The digit that occurs the most is: %d (appeared %d times)\n", mostFrequentDigit, maxCount);

    return 0;
}
