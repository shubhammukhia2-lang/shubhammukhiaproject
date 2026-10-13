//wap to print pallindrome or not 
#include<stdio.h>
int main()
{
    int num,orignal,digit,reverse=0
    printf("enter number");
    scanf("%d",&num);
    orignal=num;
    while (num>0)
    {
        digit =num%10
        reverse =reverse*10+digit;
        num=num/10;
    }
    if(original==reverse)
    printf("Palindrame number")
    else
    printf("not a palindrame");
    return 0;
}