//Perform diagonal traversal of a matrix.

#include <stdio.h>

#define MAX 100

int main() {
    int matrix[MAX][MAX];
    int m, n;

    printf("Enter number of rows (m): ");
    scanf("%d", &m);
    printf("Enter number of columns (n): ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal Traversal of the matrix:\n");

    
    for (int d = 0; d < m + n - 1; d++) {
        
        int row, col;

        if (d % 2 == 0) {
            
            row = (d < m) ? d : m - 1;
            col = d - row;
            while (row >= 0 && col < n) {
                printf("%d ", matrix[row][col]);
                row--;
                col++;
            }
        } else {
            
            col = (d < n) ? d : n - 1;
            row = d - col;
            while (col >= 0 && row < m) {
                printf("%d ", matrix[row][col]);
                row++;
                col--;
            }
        }
    }

    printf("\n");
    return 0;
}
