///Q77: Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols); // Read matrix dimensions

    int matrix[rows][cols];
    int diag[rows]; // To store diagonal elements
    int isDistinct = 1;

    // Read matrix and collect diagonal elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j) {
                diag[i] = matrix[i][j];
            }
        }
    }

    // Check for duplicates in diagonal elements
    for (int i = 0; i < rows && isDistinct; i++) {
        for (int j = i + 1; j < rows; j++) {
            if (diag[i] == diag[j]) {
                isDistinct = 0;
                break;
            }
        }
    }

    if (isDistinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
