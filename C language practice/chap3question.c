/* Write a program to find grade of 
a student given his marks based on below*/
#include<stdio.h>
void main()
{
    int marks;
    printf("Enter marks: ");
    scanf("%d",&marks);
    if (marks<0 || marks>100)
    {
        printf("Wrong number");
    }
    
    else if(marks<=100 && marks>90)
    {
        printf("A");
    }
    else if(marks<=90 && marks>80)
    {
        printf("B");
    }
    else if (marks<=80 && marks>70)
    {
        printf("C");
    }
    else if (marks<=70 && marks>=60)
    {
        printf("D");
    }
    else if (marks<60)
    {
        printf("F");
    }
    else
    {
        printf("invaild marks");
    }    
    return 0;
}