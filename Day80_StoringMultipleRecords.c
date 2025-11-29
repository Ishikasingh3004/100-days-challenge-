//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int roll, marks;
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error: Could not open file for writing.\n");
        return 1;
    }
    fprintf(fp, "%s %d %d\n", "Asha", 101, 85);
    fprintf(fp, "%s %d %d\n", "Ravi", 102, 92);

    fclose(fp);
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file for reading.\n");
        return 1;
    }
    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(fp);

    return 0;
}
