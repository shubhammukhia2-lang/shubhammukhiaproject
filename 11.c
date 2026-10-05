//wap to calculate compound interest
#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, compoundInterest;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time period: ");
    scanf("%f", &time);

    compoundInterest = principal * (pow(1 + rate/100, time) - 1);

    printf("Compound Interest is: %.2f\n", compoundInterest);

    return 0;
}