/* Write a program to check whether a number is divisible by 97 or not*/
#include<stdio.h>
void main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    if (number % 97 == 0)
    {
        printf("%d is dividible by 97",number);
    }
    else
    {
        printf("%d is not divisible by 97",number);
    }
    return 0;
}