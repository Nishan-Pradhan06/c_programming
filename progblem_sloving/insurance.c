// ABC company insurance it driver according to following rules
/*
if driver is married male and above 25 yrs
if driver is unmarried male and above 30 yrs
if driver is female and above 25 yrs
*/
//wap to find the drive is insured or not
#include <stdio.h>
#include <conio.h>
int main()
{
    int age;
    char status, gender;
    printf("Enter your gender(b/g): ");
    fflush(stdin); // clear the input
    scanf("%c", &gender);
    if (gender == 'b')
    {
        printf("Enter Your Age: ");
        scanf("%d", &age);
        printf("Enter your marital-status(m/u): ");
        fflush(stdin);
        scanf("%c", &status);
        if (age > 25 && status == 'm' || age > 30 && status == 'u')
        {
            /* code */
            printf("You are eligible for insurance");
        }

        else
        {
            printf("You are not eligible for insurance");
        }
    }
    else if (gender == 'g')
    {
        printf("Enter your age: ");
        scanf("%d", &age);
        if (age > 25)
        {
            printf("You are eligible for insurance");
        }
        else
        {
            printf("You are not eligible for insurance");
        }
    }
    else
    {
        printf("You are not eligible for insurance");
    }

    return 0;
}