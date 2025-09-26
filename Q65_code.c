//Search in a sorted array using binary search.

#include <stdio.h>


int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        
        if (arr[mid] == target)
            return mid;

        
        else if (arr[mid] < target)
            left = mid + 1;

        
        else
            right = mid - 1;
    }

    
    return -1;
}

int main() {
    int arr[] = {2, 4, 10, 23, 45, 66, 89};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 45;

    int result = binarySearch(arr, n, target);
    if (result != -1)
        printf("Element found at index: %d\n", result);
    else
        printf("Element not found in array.\n");

    return 0;
}
