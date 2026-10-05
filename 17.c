// Wap to print loop#include <stdio.h>
int main()
{
    int x, y;
    x = 5;
    y = 10;
    printf("the value %d %d %d", x, x++, ++x);
    printf("the value %d %d %d", y, y++, ++y);
    return 0;
}