//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int kthSmallest(int arr[], int n, int k) {
    sortArray(arr, n);  
    if (k > 0 && k <= n) {
        return arr[k - 1];  
    }
    return -1;  
}

int main() {
    int arr1[] = {10, 5, 4, 3, 48, 6, 2, 33, 53, 10};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int k1 = 4;
    printf("%d\n", kthSmallest(arr1, n1, k1));  

    int arr2[] = {7, 10, 4, 3, 20, 15};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 3;
    printf("%d\n", kthSmallest(arr2, n2, k2)); 

    return 0;
}
