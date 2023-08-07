
//wap to find a entered year is a leap or not using nested if
#include <stdio.h>
#include <conio.h>
int main()
{
    int year;
    printf("Enter the Year: ");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        /* code */
        if (year % 100 == 0)
        {
            /* code */
            if (year % 400 == 0)
            {
                /* code */
                printf("Enterted year is a leap year");
            }
            else
            {
                printf("Entered year is not a leap year");
            }
        }
        else
        {
            printf("Entered year is  a leap year");
        }
    }
    else
    {
        printf("Entred year is not a leap year");
    }

    return 0;
}
/*if (year %4==0 && year %100!=0)|| (year %400==0){
    printf("Leap year");
}else{
    printf("Not Leap year");
}


*/