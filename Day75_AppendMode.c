//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>
int main() {
    FILE *fp;
    char filename[100];
    char newLine[200];
    printf("Enter filename: ");
    scanf("%s", filename);
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }
    getchar();
    printf("Enter text to append: ");
    fgets(newLine, sizeof(newLine), stdin);

    fputs(newLine, fp);
    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}
