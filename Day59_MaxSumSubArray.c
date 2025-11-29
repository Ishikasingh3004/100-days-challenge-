//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include <stdio.h>

int maxSumSubarray(int arr[], int n, int k) {
    if (k > n) return -1;  
    int windowSum = 0;
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }
    int maxSum = windowSum;
    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];  
        if (windowSum > maxSum) {
            maxSum = windowSum;
        }
    }

    return maxSum;
}
int main() {
    int arr1[] = {100, 200, 300, 400};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int k1 = 2;
    printf("%d\n", maxSumSubarray(arr1, n1, k1));  

    int arr2[] = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 4;
    printf("%d\n", maxSumSubarray(arr2, n2, k2));

    int arr3[] = {100, 200, 300, 400};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int k3 = 1;
    printf("%d\n", maxSumSubarray(arr3, n3, k3));  

    return 0;
}
