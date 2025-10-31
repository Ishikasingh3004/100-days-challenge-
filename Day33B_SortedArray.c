///Q66: Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    int n, key;
    scanf("%d", &n); // Read size of array

    int arr[n + 1]; // Allocate space for one extra element
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read array elements
    }

    scanf("%d", &key); // Element to insert

    int i = n - 1;
    // Shift elements to the right to make space for the new element
    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = key; // Insert the element

    // Print the updated array
    for (int j = 0; j <= n; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}
