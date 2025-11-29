//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
#include <stdio.h>
#include <string.h>
void checkAnagram(char s[], char t[]) {
    int count[26] = {0};  
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return;
    }

   
    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }
    for (int i = 0; t[i] != '\0'; i++) {
        count[t[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("Not Anagram\n");
            return;
        }
    }

    printf("Anagram\n");
}

int main() {
    char s1[] = "anagram";
    char t1[] = "nagaram";
    checkAnagram(s1, t1);  

    char s2[] = "rat";
    char t2[] = "car";
    checkAnagram(s2, t2);  

    return 0;
}
