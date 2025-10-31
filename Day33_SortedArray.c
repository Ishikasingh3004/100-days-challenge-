///Q65: Search in a sorted array using binary search.
#include <stdio.h>

int main() {
    int n, key;
    scanf("%d", &n); // Read size of array

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read array elements
    }

    scanf("%d", &key); // Read the element to search

    int low = 0, high = n - 1, mid, found = -1;

    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            found = mid;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (found != -1)
        printf("Found at index %d\n", found);
    else
        printf("-1\n");

    return 0;
}
