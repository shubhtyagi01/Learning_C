//Check if the elements on the diagonal of a matrix are distinct.


#include <stdio.h>
#include <stdbool.h>

#define MAX 100

int main() {
    int matrix[MAX][MAX];
    int n;

    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    int diagonal[MAX];
    int count = 0;

    for (int i = 0; i < n; i++) {
        diagonal[count++] = matrix[i][i];  
    }

    
    bool allDistinct = true;
    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (diagonal[i] == diagonal[j]) {
                allDistinct = false;
                break;
            }
        }
        if (!allDistinct) break;
    }

    if (allDistinct) {
        printf("All diagonal elements are distinct.\n");
    } else {
        printf("Diagonal elements are not distinct.\n");
    }

    return 0;
}
