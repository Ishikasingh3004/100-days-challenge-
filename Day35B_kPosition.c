///Q70: Rotate an array to the right by k positions.
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n); // Read size of array

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read array elements
    }

    scanf("%d", &k); // Read number of positions to rotate
    k = k % n; // Normalize k if it's larger than n

    // Reverse helper function
    void reverse(int a[], int start, int end) {
        while (start < end) {
            int temp = a[start];
            a[start] = a[end];
            a[end] = temp;
            start++;
            end--;
        }
    }

    // Rotate using three reversals
    reverse(arr, 0, n - 1);       // Reverse entire array
    reverse(arr, 0, k - 1);       // Reverse first k elements
    reverse(arr, k, n - 1);       // Reverse remaining elements

    // Print rotated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
