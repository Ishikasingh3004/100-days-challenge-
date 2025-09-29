// Q37: Write a program to find the LCM of two numbers.
#include <stdio.h>
int main() {
    int a, b, tempA, tempB, remainder, hcf, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    tempA = a;
    tempB = b;
    while(tempB != 0) {
        remainder = tempA % tempB;
        tempA = tempB;
        tempB = remainder;
    }
    hcf = tempA;
    lcm = (a * b) / hcf;
    printf("%d\n", lcm);
    return 0;
}
