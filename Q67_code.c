//Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int array[100], size, position, element;


    printf("Enter number of elements in array: ");
    scanf("%d", &size);

    
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the position (1 to %d): ", size + 1);
    scanf("%d", &position);


    if (position < 1 || position > size + 1) {
        printf("Invalid position!\n");
        return 1;
    }

    
    for (int i = size - 1; i >= position - 1; i--) {
        array[i + 1] = array[i];
    }

    
    array[position - 1] = element;
    size++;
    printf("Array after insertion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

