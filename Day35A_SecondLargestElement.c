/// Q69: Find the second largest element in an array.
#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n); // Read size of array

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read array elements
    }

    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second != INT_MIN)
        printf("%d\n", second);
    else
        printf("No second largest element\n");

    return 0;
}
