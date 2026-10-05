//wap to convert days into  weeks and days
#include <stdio.h>

int main() {
    int totalDays, weeks, days;

    printf("Enter the total number of days: ");
    scanf("%d", &totalDays);

    weeks = totalDays / 7;
    days = totalDays % 7;

    printf("Number of weeks: %d\n", weeks);
    printf("Number of days: %d\n", days);

    return 0;
}