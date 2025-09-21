//Find the maximum and minimum element in an array.

#include <stdio.h>

int main() {
    int array[] = {10, 5, 20, 8, 15};  
    int size = sizeof(array) / sizeof(array[0]);

    int max = array[0];
    int min = array[0];

    for(int i = 1; i < size; i++) {
        if(array[i] > max) {
            max = array[i];
        }
        if(array[i] < min) {
            min = array[i];
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
