//Q120: Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <ctype.h>  
void toSentenceCase(char str[]) {
    int capitalize = 1;  
    for (int i = 0; str[i] != '\0'; i++) {
        if (capitalize && isalpha(str[i])) {
            str[i] = toupper(str[i]);  
            capitalize = 0;
        } else {
            str[i] = tolower(str[i]); 
        }

        if (str[i] == ' ') {
            capitalize = 1;
        }
    }
}

int main() {
    char str1[] = "I am trying to build logic.";
    toSentenceCase(str1);
    printf("%s\n", str1); 
    char str2[] = "The classes are supposed to start early.";
    toSentenceCase(str2);
    printf("%s\n", str2);  
    char str3[] = "We are going to look at 26 different test cases.";
    toSentenceCase(str3);
    printf("%s\n", str3);  
    return 0;
}
