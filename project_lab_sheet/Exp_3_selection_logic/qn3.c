// Input a year number and determine whether it is a leap year.
#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf("Enter any year: ");
    scanf("%d",&year);
    if( (year%4==0 && year%100!=0) ||  (year%400)==0 )
    printf("\nLeap Year");
    else
    printf("\nNot Leap Year");
    
}