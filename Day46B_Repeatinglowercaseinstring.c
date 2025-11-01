/// Q92: Find the first repeating lowercase alphabet in a string.
#include <stdio.h>

int main() {
    char str[1000];
    int freq[26] = {0}; // Frequency array for lowercase letters

    // Read input string
    fgets(str, sizeof(str), stdin);

    // Traverse string and track frequencies
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
            if (freq[ch - 'a'] == 2) {
                printf("%c\n", ch);
                return 0;
            }
        }
    }

    // If no repeating lowercase alphabet found
    printf("No repeating lowercase alphabet\n");
    return 0;
}
