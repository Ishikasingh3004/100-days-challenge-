/// Q72: Find the sum of all elements in a matrix.
#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols); // Read matrix dimensions

    int matrix[rows][cols];
    int sum = 0;

    // Read matrix elements and compute sum
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("%d\n", sum); // Print the total sum
    return 0;
}
