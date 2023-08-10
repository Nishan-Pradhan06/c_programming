// wap to input a number (1-7) from keyboard and display appropriate day name.
#include <stdio.h> //printf() function declaration for C language
#include <conio.h>
int main()
{
    int day;
    printf("Enter the day number: ");
    scanf("%d", &day);
    if (day == 1)
    {
        /* code */
        printf("It is sunday");
    }
    else if (day == 2)
    {
        /* code */
        printf("it's monday\n");
    }
    else if (day == 3)
    {
        printf("it's tuesday \n");
    }
    else if (day == 4)
    {
        /* code */
        printf("it's Wednesday \n");
    }
    else if (day == 5)
    {
        /* code */
        printf("it's Thursday \n");
    }
    else if (day == 6)
    {
        /* code */
        printf("it's Friday \n");
    }
    else if (day == 7)
    {
        printf("It is Saturday");
    }
    else
    {
        printf(" Invalid \n");
    }
    return 0;
}