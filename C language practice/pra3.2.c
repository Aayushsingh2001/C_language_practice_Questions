//Write a program to find out whether a student in pass or fail
/*if it requirs total 40% and at least 33% in each subject to pass.
assusme 3 subjects and take marks as an input from the user.*/
#include<stdio.h>
void main()
{
    float maths, physics, chemistry, total, percentage;
    printf("maths=");
    scanf("%f",&maths);
    printf("physics=");
    scanf("%f",&physics);
    printf("chemistry=");
    scanf("%f",&chemistry);
    if (maths>=33 && physics>=33 && chemistry>=33)
    {
        total = maths + physics + chemistry;
        percentage = total/3;
        printf("The total marks in percentage is %.2f\n",percentage);
        if (percentage>=40)
        {
            printf("Student is PASS\n");
        }
        
    }
    else
    {
        printf("Student is FAIL\n");
    }
    return 0;
}
