//Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
#include <stdio.h>
void firstNegativeInWindow(int arr[], int n, int k) {
    for (int i = 0; i <= n - k; i++) {
        int found = 0;  
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d", arr[j]); 
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("0"); 
        }
        if (i != n - k) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    int arr1[] = {-8, 2, 3, -6, 10};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int k1 = 2;
    firstNegativeInWindow(arr1, n1, k1);  

    int arr2[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 3;
    firstNegativeInWindow(arr2, n2, k2);  
    int arr3[] = {12, 1, 3, 5};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int k3 = 3;
    firstNegativeInWindow(arr3, n3, k3);  
    return 0;
}
