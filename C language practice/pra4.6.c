/*Write a program to implement program 5 using for and do while loop.*/
//*******do-while loop********
/*#include<stdio.h>
void main()
{
    int i=1, sum=0;

    do
    {
        sum = sum + i;
        i++;
    }while(i<=10);
    printf("The addition of first 10 natural number is %d\n",sum);
    return 0;
}                                                                                     */


//******for loop**********
#include<stdio.h>
void main()
{
    int sum;
    for (int i = 0; i <=10; i++)
    {
        sum = sum + i;
    }
    printf("addition of first 10 natural number is %d",sum);
    return 0;
}