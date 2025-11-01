///Q97: Print the initials of a name.
#include <stdio.h>
int main() {
    char str[1000];
    int i = 0;
    fgets(str, sizeof(str), stdin);
    if (str[0] != ' ' && str[0] != '\n') {
        printf("%c.", str[0]);
    }
    while (str[i] != '\0') {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\n' && str[i + 1] != '\0') {
            printf("%c.", str[i + 1]);
        }
        i++;
    }
    printf("\n");
    return 0;
}
