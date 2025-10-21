/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
*/
#include <stdio.h>
int main() {
    int rows[] = {1, 3, 5, 3, 1}; 
    for (int b = 0; b < 5; b++) {          
        for (int i = 0; i < rows[b]; i++)  
            printf("*\n");
        printf("\n");                      
    }
    return 0;
}
