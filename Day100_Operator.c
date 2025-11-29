//Q150: Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    int marks;
};
int main() {
    struct Student s;
    struct Student *ptr;
    ptr = &s;
    printf("Enter name: ");
    scanf("%s", ptr->name);

    printf("Enter roll number: ");
    scanf("%d", &ptr->roll_no);

    printf("Enter marks: ");
    scanf("%d", &ptr->marks);
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n",
           ptr->name, ptr->roll_no, ptr->marks);

    return 0;
}
