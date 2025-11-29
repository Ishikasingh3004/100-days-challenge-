//Q148: Take two structs as input and check if they are identical.
#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int roll_no;
    int marks;
};
int main() {
    struct Student s1, s2;
    printf("Enter details of Student 1:\n");
    printf("Name: ");
    scanf("%s", s1.name);
    printf("Roll No: ");
    scanf("%d", &s1.roll_no);
    printf("Marks: ");
    scanf("%d", &s1.marks);
    printf("\nEnter details of Student 2:\n");
    printf("Name: ");
    scanf("%s", s2.name);
    printf("Roll No: ");
    scanf("%d", &s2.roll_no);
    printf("Marks: ");
    scanf("%d", &s2.marks);
    if (strcmp(s1.name, s2.name) == 0 && s1.roll_no == s2.roll_no && s1.marks == s2.marks) {
        printf("Same\n");
    } else {
        printf("Different\n");
    }

    return 0;
}
