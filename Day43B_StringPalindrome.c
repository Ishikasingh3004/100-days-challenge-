///Q86: Check if a string is a palindrome.
#include <stdio.h>
int main() {
    char str[1000];
    int len = 0, isPalindrome = 1;
    fgets(str, sizeof(str), stdin);
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");
    return 0;
}
