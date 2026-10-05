//wap to calculate marks of two subject 
#include<stdio.h>
int main()
{
    int pmo,mmo,total;
    printf("Enter marks for Physics and Mathematics: ");
    scanf("%d %d",&pmo,&mmo);
    total=(30/100)*pmo+(70/100)*mmo;
    printf("Total marks = %d",total);
    return 0;
}