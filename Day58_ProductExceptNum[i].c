//Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
#include <stdio.h>

void productExceptSelf(int nums[], int n) {
    int prefix[n], suffix[n], answer[n];
    prefix[0] = 1;
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }
    suffix[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }
    for (int i = 0; i < n; i++) {
        answer[i] = prefix[i] * suffix[i];
    }
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i != n - 1) printf(",");
    }
    printf("]\n");
}

int main() {
    int nums1[] = {1, 2, 3, 4};
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    productExceptSelf(nums1, n1);

    int nums2[] = {-1, 1, 0, -3, 3};
    int n2 = sizeof(nums2) / sizeof(nums2[0]);
    productExceptSelf(nums2, n2);

    return 0;
}
