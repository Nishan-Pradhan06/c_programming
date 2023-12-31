#include <stdio.h>
#include <conio.h>

int main()
{
    int age;
    char status, gender;

    printf("Enter your gender (b/g): ");
    scanf(" %c", &gender); // Notice the space before %c to consume the newline character

    if (gender == 'b')
    {
        printf("Enter the age: ");
        scanf("%d", &age);
        printf("Enter the status: ");
        scanf(" %c", &status); // Notice the space before %c to consume the newline character

        if ((age > 25 && status == 'm') || (age > 30 && status == 'u'))
        {
            printf("Driver is insured.\n");
        }
        else
        {
            printf("Driver is not insured.\n");
        }
    }
    else if (gender == 'f')
    {
        printf("Enter the age: ");
        scanf("%d", &age);
        printf("Enter the status: ");
        scanf(" %c", &status); // Notice the space before %c to consume the newline character

        if (age > 25 && status == 'u')
        {
            printf("Driver is insured.\n");
        }
        else
        {
            printf("Driver is not insured.\n");
        }
    }
    else
    {
        printf("Invalid Gender Input.\n");
    }

    return 0;
}
