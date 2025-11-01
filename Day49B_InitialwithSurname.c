/// Q98: Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int i = 0;

    // Read input string
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline if present
    str[strcspn(str, "\n")] = '\0';

    // Print initials
    if (str[0] != ' ') {
        printf("%c.", str[0]);
    }

    while (str[i] != '\0') {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') {
            // Check if this is the last word (surname)
            int j = i + 1;
            int spaceFound = 0;
            while (str[j] != '\0') {
                if (str[j] == ' ') {
                    spaceFound = 1;
                    break;
                }
                j++;
            }

            if (spaceFound) {
                printf("%c.", str[i + 1]);
            } else {
                // Print surname in full
                printf(" %s\n", &str[i + 1]);
                return 0;
            }
        }
        i++;
    }

    return 0;
}
