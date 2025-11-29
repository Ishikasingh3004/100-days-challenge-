//Q147: Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>
struct Employee {
    char name[50];
    int id;
    float salary;
};
int main() {
    struct Employee emp, emp_read;
    FILE *fp;
    printf("Enter employee name: ");
    scanf("%s", emp.name);
    printf("Enter employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    fread(&emp_read, sizeof(struct Employee), 1, fp);
    fclose(fp);
    printf("\nEmployee Data Read from File:\n");
    printf("Name: %s | ID: %d | Salary: %.2f\n", emp_read.name, emp_read.id, emp_read.salary);

    return 0;
}
