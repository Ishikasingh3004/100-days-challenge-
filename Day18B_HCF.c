// Q36: Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>
int main() {
    int a, b, tempA, tempB, remainder;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    tempA = a;
    tempB = b;
    while(tempB != 0) {
        remainder = tempA % tempB;
        tempA = tempB;
        tempB = remainder;
    }
    printf("%d\n", tempA);
    return 0;
}
