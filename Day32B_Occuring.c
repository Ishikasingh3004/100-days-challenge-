/// Q64: Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    long long num;
    scanf("%lld", &num); // Read the number

    int freq[10] = {0}; // Frequency array for digits 0-9

    while (num > 0) {
        int digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    int max_digit = 0;
    for (int i = 1; i < 10; i++) {
        if (freq[i] > freq[max_digit]) {
            max_digit = i;
        }
    }

    printf("%d\n", max_digit);
    return 0;
}
