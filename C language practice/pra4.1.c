/*Write a program to print multiplication table of a given number n.*/
#include<stdio.h>
void main()
{
    int a,i,total;
    printf("The multiplication table of ");
    scanf("%d",&a);
    for (int i = 1; i <= 10; i++)
    {
        total = a * i;
        printf("%d * %d = %d\n",a,i,total);
    }
    return 0;
}