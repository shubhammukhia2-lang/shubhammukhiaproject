//wap to calculate area of square
#include <stdio.h>

int main() {
    float side, area;

    printf("Enter the side of the square: ");
    scanf("%f", &side);

    area = side * side;

    printf("Area of the square is: %.2f\n", area);

    return 0;
}