//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>
#include <string.h>
enum Menu { ADD, SUBTRACT, MULTIPLY };
int main() {
    char choice[20];
    int a, b;
    enum Menu operation;
    printf("Enter operation (ADD/SUBTRACT/MULTIPLY) and two numbers: ");
    scanf("%s %d %d", choice, &a, &b);
    if (strcmp(choice, "ADD") == 0) {
        operation = ADD;
    } else if (strcmp(choice, "SUBTRACT") == 0) {
        operation = SUBTRACT;
    } else if (strcmp(choice, "MULTIPLY") == 0) {
        operation = MULTIPLY;
    } else {
        printf("Invalid operation!\n");
        return 1;
    }
    switch (operation) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
