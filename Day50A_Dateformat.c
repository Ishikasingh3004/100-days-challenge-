/// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>
int main() {
    char date[20];
    int day, year;
    char month[4];
    fgets(date, sizeof(date), stdin);
    sscanf(date, "%d/04/%d", &day, &year);
    strcpy(month, "Apr");
    printf("%02d-%s-%d\n", day, month, year);
    return 0;
}
