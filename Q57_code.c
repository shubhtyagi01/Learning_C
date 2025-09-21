//Find the sum of array elements.

#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5};  // Example array
    int sum = 0;
    int size = sizeof(array) / sizeof(array[0]); 

    for(int i = 0; i < size; i++) {
        sum += array[i];
    }

    printf("Sum of array elements = %d\n", sum);

    return 0;
}
