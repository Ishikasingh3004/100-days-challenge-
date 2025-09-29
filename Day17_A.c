// Q33: Write a program to check if a number is an Armstrong number.
#include <stdio.h>
int main() {
    int n, original, digit, sum = 0, numDigits = 0, temp, i, power;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    temp = n;
    while (temp != 0) {
        temp /= 10;
        numDigits++;
    }
    temp = n;
    while (temp != 0) {
        digit = temp % 10;
        power = 1;
        for(i = 1; i <= numDigits; i++) {
            power *= digit;  
        }
        sum += power;
        temp /= 10;
    }
    if (sum == original)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
    return 0;
}
