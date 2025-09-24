//Reverse an array without taking extra space.

#include <stdio.h>

int main() {
    int array[100], n, i, temp;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);


    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    
    for (i = 0; i < n / 2; i++) {
        temp = array[i];
        array[i] = array[n - i - 1];
        array[n - i - 1] = temp;
    }

    
    printf("Reversed array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
