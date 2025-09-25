//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.//
#include <stdio.h>

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest, amount;
    int i;
    printf("Enter principal, rate, and time: ");
    scanf("%f %f %f", &principal, &rate, &time);
    simpleInterest = (principal * rate * time) / 100;
    amount = principal;
    for (i = 0; i < (int)time; i++) {
        amount = amount * (1 + rate / 100);
    }
    compoundInterest = amount - principal;
    printf("Simple Interest=%.2f, Compound Interest=%.2f\n", simpleInterest, compoundInterest);

    return 0;
}
