/*Write a program to calculate the sum of the number occuring int he multiplication table of 8.(8*1 to 8*10)*/
#include<stdio.h>
void main()
{
    int a=8,b;
    printf("***** The multiplication table of 8 *****\n");
    for(int i=1;i<=10;i++)
    {
        b = a * i;
        printf("%d*%d=%d\n",a,i,b);
    }
}