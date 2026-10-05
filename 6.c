//wap to convert seconds into hours, minutes and seconds
#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    printf("Enter the total number of seconds: ");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf("Hours: %d\n", hours);
    printf("Minutes: %d\n", minutes);
    printf("Seconds: %d\n", seconds);

    return 0;
}