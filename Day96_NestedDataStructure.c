//Q146: Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>
struct Date {
    int day;
    int month;
    int year;
};
struct Employee {
    char name[50];
    int id;
    struct Date joining_date;  
};

int main() {
    struct Employee emp;
    printf("Enter employee name: ");
    scanf("%s", emp.name);

    printf("Enter employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter joining date (dd mm yyyy): ");
    scanf("%d %d %d", &emp.joining_date.day, &emp.joining_date.month, &emp.joining_date.year);
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%d\n",
           emp.name, emp.id,
           emp.joining_date.day, emp.joining_date.month, emp.joining_date.year);

    return 0;
}
