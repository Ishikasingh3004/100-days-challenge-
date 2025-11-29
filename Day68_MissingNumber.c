//Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>
int findMissingNumber(int arr[], int n) {
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;
    for (int i = 0; i < n; i++) {
        actualSum += arr[i];
    }

    return expectedSum - actualSum;
}
int main() {
    int arr1[] = {0, 3, 2, 4};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("%d\n", findMissingNumber(arr1, n1)); 
    int arr2[] = {1, 2, 3};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("%d\n", findMissingNumber(arr2, n2)); 

    int arr3[] = {0, 4, 3, 1, 5};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("%d\n", findMissingNumber(arr3, n3));  

    return 0;
}
