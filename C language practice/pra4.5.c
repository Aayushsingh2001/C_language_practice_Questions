/*Write a program to sum first ten natural number using while loop.*/
#include<stdio.h>
void main()
{
    int i=1,sum=0;
    while (i<=10)
    {
        sum = sum + i;
        i++;
    }
    printf("The addition of 10 natural number is %d",sum);
    return 0;
}