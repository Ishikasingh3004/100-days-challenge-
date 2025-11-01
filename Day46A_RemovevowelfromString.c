/// Q91: Remove all vowels from a string.
#include <stdio.h>

int main() {
    char str[1000], result[1000];
    int j = 0;

    // Read input string
    fgets(str, sizeof(str), stdin);

    // Traverse and copy non-vowel characters
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char ch = str[i];

        // Convert to lowercase for uniform comparison
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + ('a' - 'A');
        }

        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
            result[j++] = str[i]; // Keep original case
        }
    }

    result[j] = '\0'; // Null-terminate the result
    printf("%s\n", result);
    return 0;
}
