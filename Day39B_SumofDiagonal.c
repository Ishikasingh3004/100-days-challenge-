///Q78: Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m); // Read matrix dimensions

    int matrix[n][m], sum = 0;

    // Read matrix and compute diagonal sum
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j) {
                sum += matrix[i][j]; // Add main diagonal element
            }
        }
    }

    printf("%d\n", sum); // Print the sum
    return 0;
}
