/*write a program to print multiplication table of 10 in reversed order.*/
#include<stdio.h>
void main()
{
    int a=10,b,i;
    printf("The multiplication table of %d in reversed order\n",a);
    for(int i=10;i>0;--i)
    {
        b = a * i;
        printf("%d*%d=%d\n",a,i,b);
    }
    return 0;
}