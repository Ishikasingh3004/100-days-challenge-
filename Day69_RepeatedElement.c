//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>
int findRepeated(int arr[], int n) {
    int visited[1000] = {0}; 
    for (int i = 0; i < n; i++) {
        if (visited[arr[i]] == 1) {
            return arr[i];  
        }
        visited[arr[i]] = 1;
    }
    return -1; 
}

int main() {
    int arr1[] = {1, 3, 3, 4};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("%d\n", findRepeated(arr1, n1));  

    int arr2[] = {1, 2, 2};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("%d\n", findRepeated(arr2, n2));  

    int arr3[] = {0, 4, 1, 1, 5};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("%d\n", findRepeated(arr3, n3)); 
    return 0;
}
