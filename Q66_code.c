//Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

void insertSorted(int arr[], int *size, int element, int capacity) {
    if (*size >= capacity) {
        printf("Cannot insert: array is full.\n");
        return;
    }

    int i = *size - 1;


    while (i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i];
        i--;
    }


    arr[i + 1] = element;

    
    (*size)++;
}

int main() {
    int arr[100] = {2, 4, 10, 23, 45}; 
    int size = 5;                      
    int capacity = 100;                
    int element = 15;                  

    printf("Original array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    insertSorted(arr, &size, element, capacity);

    printf("Array after insertion: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
