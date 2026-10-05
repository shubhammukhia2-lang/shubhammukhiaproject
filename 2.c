//wap to callculate electricity bill based on units consumed
#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 1.20;
    } else if (units <= 200) {
        bill = 100 * 1.20 + (units - 100) * 2.00;
    } else {
        bill = 100 * 1.20 + 100 * 2.00 + (units - 200) * 3.00;
    }

    printf("The electricity bill is: Rs. %.2f\n", bill);

    return 0;
}