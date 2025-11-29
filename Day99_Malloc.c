//Q149: Use malloc() to allocate structure memory dynamically and print details.
#include <stdio.h>
#include <stdlib.h>
struct Student {
    char name[50];
    int roll_no;
    int marks;
};
int main() {
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter name: ");
    scanf("%s", s->name);

    printf("Enter roll number: ");
    scanf("%d", &s->roll_no);

    printf("Enter marks: ");
    scanf("%d", &s->marks);
    printf("Name: %s | Roll: %d | Marks: %d\n", s->name, s->roll_no, s->marks);
    free(s);
    return 0;
}
