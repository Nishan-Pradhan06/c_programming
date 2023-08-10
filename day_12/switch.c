// switch statement
#include <stdio.h>
#include <conio.h>
int main()
{
    int day;
    printf("Enter the number: ");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("sunday\n");
        break;
    case 2:
        printf("Monday\n");
        break;
    case 3:
        printf("Tuesday\n");
        break;
    case 4:
        printf("Wendesday\n");
        break;
    case 5:
        printf("Thursday\n");
        break;
    case 6:
        printf("Friday\n");
        break;
    case 7:
        printf("Saturday\n");
        break;
    default:
        printf("Invalid Day\n");
        break;
    }
    return 0;
}