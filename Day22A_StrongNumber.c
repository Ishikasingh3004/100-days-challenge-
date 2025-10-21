//Q43: Write a program to check if a number is a strong number.
#include <stdio.h>
int factorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    return fact;
}
int isStrong(int num) {
    int original = num;
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    return sum == original;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isStrong(num))
        printf("Strong number\n");
    else
        printf("Not strong number\n");
    return 0;
}
