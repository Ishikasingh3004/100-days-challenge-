// Q32: Write a program to check if a number is a palindrome.
#include <stdio.h>
int main() {
    int n, original, rev = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while (n > 0) {
        digit = n % 10;         // get last digit
        rev = rev * 10 + digit; // build reversed number
        n = n / 10;             // remove last digit
    }
    if (rev == original)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");
    return 0;
}
