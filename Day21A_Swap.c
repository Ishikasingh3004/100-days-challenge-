///Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>
int swapFirstLast(int num) {
    int temp = num;
    int last = temp % 10;
    int digits = 0;
    int first;
    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    first = temp;
    if (first == last)
        return num;
    int power = 1;
    for (int i = 0; i < digits; i++)
        power *= 10;
    int middle = num % power;     
    middle /= 10;                 
    int swapped = last * power + middle * 10 + first;
    return swapped;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = swapFirstLast(num);
    printf("Swapped number: %d\n", result);
    return 0;
}

