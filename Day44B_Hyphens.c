/// Q88: Replace spaces with hyphens in a string.
#include <stdio.h>
int main() {
    char str[1000];
    // Read input string
    fgets(str, sizeof(str), stdin);
    // Replace spaces with hyphens
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
        if (str[i] == '\n') {
            str[i] = '\0'; // Remove newline character if present
        }
    }
    printf("%s\n", str);
    return 0;
}
