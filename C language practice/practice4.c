/*Write a program to calculate simple interest for a set of
 values representing, principle , no. of years and rate of interest*/
/* Simple Interest(SI) = (P × r × t)/100  
   SI	=	simple interest
   P	=	initial principal balance
   r	=	annual interest rate
   t	=	time (in years)  */

#include<stdio.h>
int main()
{
    float P, r, t, SI;
    printf("Enter the principal balence(P)= ");
    scanf("%f",&P);
    printf("Enter the annual interest rate(r)= ");
    scanf("%f",&r);
    printf("Enter the time in year (t)= ");
    scanf("%f",&t);
    SI = (P*r*t)/100;
    printf("The Simple interest (SI)= %f",SI);

    return 0;
}

/*#include<stdio.h>  
int main()   
    {   
        float P , R , T , SI ;  
       P =100; R =1;  T = 1;  
        SI  = (P*R*T)/100;   
        printf("\n\n Simple Interest is : %f", SI);  
        return (0);  
    }  */