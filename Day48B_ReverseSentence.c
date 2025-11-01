/// Q96: Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>
void reverse(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    char *word_start = NULL;
    char *temp = str;
    while (*temp) {
        if (word_start == NULL && *temp != ' ') {
            word_start = temp;
        }
        if (word_start && (*(temp + 1) == ' ' || *(temp + 1) == '\0')) {
            reverse(word_start, temp);
            word_start = NULL;
        }
        temp++;
    }
    printf("%s\n", str);
    return 0;
}
