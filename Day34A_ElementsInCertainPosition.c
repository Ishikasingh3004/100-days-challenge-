/// Q67: Insert an element in an array at a given position.
#include <stdio.h>

int main() {
    int n, pos, val;
    scanf("%d", &n); // Read size of array

    int arr[n + 1]; // Allocate space for one extra element
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read array elements
    }

    scanf("%d %d", &pos, &val); // Read position and value to insert

    // Shift elements to the right from the position
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val; // Insert the value

    // Print updated array
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
