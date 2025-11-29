//Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
#include <stdio.h>
void mergeArrays(int nums1[], int m, int nums2[], int n) {
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            printf("%d ", nums1[i]);
            i++;
        } else {
            printf("%d ", nums2[j]);
            j++;
        }
    }

   
    while (i < m) {
        printf("%d ", nums1[i]);
        i++;
    }
    while (j < n) {
        printf("%d ", nums2[j]);
        j++;
    }

    printf("\n");
}

int main() {
    int nums1[] = {2, 7, 11, 15};
    int nums2[] = {4, 8, 10};
    int m = sizeof(nums1) / sizeof(nums1[0]);
    int n = sizeof(nums2) / sizeof(nums2[0]);
    mergeArrays(nums1, m, nums2, n); 

    int nums3[] = {1, 2, 7};
    int nums4[] = {9, 10, 17};
    int m2 = sizeof(nums3) / sizeof(nums3[0]);
    int n2 = sizeof(nums4) / sizeof(nums4[0]);
    mergeArrays(nums3, m2, nums4, n2); 

    int nums5[] = {-10, -2, 7};
    int nums6[] = {-3, -1, 7};
    int m3 = sizeof(nums5) / sizeof(nums5[0]);
    int n3 = sizeof(nums6) / sizeof(nums6[0]);
    mergeArrays(nums5, m3, nums6, n3); 
    return 0;
}
