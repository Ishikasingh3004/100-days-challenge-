/// Q68: Delete an element from an array.
#include <stdio.h>

int main() {
    int n, pos;
    scanf("%d", &n); // Read size of array

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read array elements
    }

    scanf("%d", &pos); // Read position to delete

    // Shift elements to the left from the position
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Print updated array (size reduced by 1)
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
