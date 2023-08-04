//write a program to input a marks of subject and decide wheather a student is pass/fail in that subject
#include<stdio.h>
#include<conio.h>
int main()
{
    int marks;
    printf("Enter your marks");
    scanf("%d",&marks);
    if (marks<40) //if condition is false it goes to else stamtent skiping if conditions
    {
        /* code */
        printf("Your are Failed!!!");
    }
    else
    {
        printf("Your are Passed!!!");
    }
    return 0;
    
}