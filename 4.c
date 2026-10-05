//wap to calculate age next year
#include <stdio.h>

int main() {
    int currentAge, nextYearAge;

    printf("Enter your current age: ");
    scanf("%d", &currentAge);

    nextYearAge = currentAge + 1;

    printf("Your age next year will be: %d\n", nextYearAge);

    return 0;
}