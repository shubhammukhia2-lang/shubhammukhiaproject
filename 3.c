//wap to calculate salary of employee based on basic salary
#include <stdio.h>

int main() {
    float basicSalary, grossSalary;

    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basicSalary);

    grossSalary = basicSalary + (0.1 * basicSalary) + (0.05 * basicSalary);

    printf("Gross salary of the employee is: %.2f\n", grossSalary);

    return 0;
}   