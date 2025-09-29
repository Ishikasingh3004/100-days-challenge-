// Q39: Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main() {
    int n, digit, product = 1;
    int hasOdd = 0; 
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n < 0) n = -n; 
    while(n != 0) {
        digit = n % 10;
        if(digit % 2 != 0) {  
            product *= digit;
            hasOdd = 1;
        }
        n /= 10;
    }
    if(hasOdd)
        printf("%d\n", product);
    else
        printf("1\n");  
    return 0;
}
