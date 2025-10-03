//Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

#define MAX 100

int main() {
    int matrix[MAX][MAX];
    int n, sum = 0;

    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    printf("Sum of the main diagonal elements = %d\n", sum);

    return 0;
}
