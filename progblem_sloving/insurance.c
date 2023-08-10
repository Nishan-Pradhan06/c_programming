// ABC company insurance it driver according to following rules
/*
if driver is married male and above 25 yrs
if driver is unmarried male and above 30 yrs
if driver is female and above 25 yrs
*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int age;
    char status, gender;
    printf("Enter your gender: ");
    fflush(stdin); // clear the input
    scanf("%c", &gender);
    if (gender == 'b')
    {
        /* code */

        printf("Enter your Married Status: ");
        fflush(stdin); // clear the input
        scanf("%c", &status);
        printf("Enter your Age: ");
        scanf("%c", &age);
    }
    else
    {
        printf("Enter your Age: ");
        scanf("%c", &age);
    }

    fflush(stdin); // clear the input

    if (age >= 25 && status == 'm' && gender == 'b')
    {

        printf("\nYou are eligible for ABC Company Insurance\n");
    }
    else if (age >= 30 && status == 'm' && gender == 'b')
    {
        printf("\nYou are eligible for ABC Company Insurance\n");
    }

    else if (age > 25 && gender == 'f')
    {
        /* code */
        printf("\nYou are eligible for ABC Company Insurance\n");
    }
    else
    {
        printf("\nSorry you are not eligible for ABC Company Insurance \n");
    }

    return 0;
}