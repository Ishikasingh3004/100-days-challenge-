///Q76: Check if a matrix is symmetric.
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m); // Read matrix dimensions

    int matrix[n][m];
    int isSymmetric = 1;

    // Read matrix elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // A matrix must be square to be symmetric
    if (n != m) {
        isSymmetric = 0;
    } else {
        // Check symmetry: matrix[i][j] == matrix[j][i]
        for (int i = 0; i < n && isSymmetric; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] != matrix[j][i]) {
                    isSymmetric = 0;
                    break;
                }
            }
        }
    }

    if (isSymmetric)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
