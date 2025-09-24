//Search for an element in an array using linear search.

#include <stdio.h>

int main() {
    int array[100], n, i, search, found = 0;

    
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    
    printf("Enter the number to search: ");
    scanf("%d", &search);

    
    for (i = 0; i < n; i++) {
        if (array[i] == search) {
            printf("Element %d found at position %d.\n", search, i + 1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", search);
    }

    return 0;
}
