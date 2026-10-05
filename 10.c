//wap to calculate last digit of a number
#include <stdio.h>

int main() {
    int number, lastDigit;

    printf("Enter a number: ");
    scanf("%d", &number);

    lastDigit = number % 10;

    printf("Last digit of the number is: %d\n", lastDigit);

    return 0;
}