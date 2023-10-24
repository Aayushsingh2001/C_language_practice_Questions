/*calculate income tax paid by an employee to the government as per the slabs mentaioned below.*/
   // Income tax         // Tax
/*   2.5L - 5.0L            5%
     5.0L - 10.0L           20%
     above 10.0L            30%    
Note that there is no tax below 2.5L. Take income amount as an input from the user.  */
#include<stdio.h>
void main()
{
    int amount, tax;
    printf("Enter the income amount of an employee: ");\
    scanf("%d",&amount);
    if(amount<250000)
    {
        printf("There is no tax\n");
    }
    else if (amount>=250000 && amount<500000)
    {
        printf("your tax is 5%\n");
        tax = amount*5/100;
        printf("The incomme tax paid by the employee: %d\n",tax);
    }
    else if (amount>=500000 && amount<1000000)
    {
        printf("your tax is 20%\n");
        tax = amount*20/100;
        printf("The income tax paid by the employee: %d\n",tax);
    }
    else if (amount>=1000000)
    {
        printf("your tax is 30%\n",tax);
        tax = amount*30/100;
        printf("The income tax paid by the employee: %d\n",tax);
    }
    return 0;   
}