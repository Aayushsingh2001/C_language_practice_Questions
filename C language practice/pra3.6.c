/*Write a proram to find the gratest of four number entered by the user*/
#include<stdio.h>
void main()
{
    int num1, num2, num3, num4;
    printf("Enter the four number: \n");
    scanf("%d\n%d\n%d\n%d",&num1,&num2,&num3,&num4);
    if (num1>num2 && num1>num3 && num1>num4)
    {
        printf("%d is gratest\n",num1);
    }
    else if (num2>num1 && num2>num3 && num2>num4)
    {
        printf("%d is gratest\n",num2);
    }
    else if (num3>num1 && num3>num2 && num3>num4)
    {
        printf("%d is gratest\n",num3);
    }
    else
    {
        printf("%d is gratest\n",num4);
    }
    
    return 0;
}