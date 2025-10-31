///Q73: Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols); // Read matrix dimensions

    int matrix[rows][cols];
    int rowSum[rows];

    // Read matrix and compute row sums
    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0; // Initialize sum for each row
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];
        }
    }

    // Print row sums
    for (int i = 0; i < rows; i++) {
        printf("%d ", rowSum[i]);
    }
    printf("\n");

    return 0;
}
