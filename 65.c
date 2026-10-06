//wap to check whether a number is positive, negative or zero using switch case
#include <stdio.h>

int main() {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if(n > 0)
        switch(1) {
            case 1:
                printf("Positive");
                break;
        }
    else if(n < 0)
        switch(1) {
            case 1:
                printf("Negative");
                break;
        }
    else
        printf("Zero");

    return 0;
}