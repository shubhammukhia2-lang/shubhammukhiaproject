// wap to calculate total and average marks of 3 
#include <stdio.h>

int main() {
    float marks1, marks2, marks3, total, average;
    
    printf("Enter marks for three subjects: ");
    scanf("%f %f %f", &marks1, &marks2, &marks3);
    
    total = marks1 + marks2 + marks3;
    average = total / 3;
    
    printf("Total marks: %.2f\n", total);
    printf("Average marks: %.2f\n", average);
    
    return 0;
}