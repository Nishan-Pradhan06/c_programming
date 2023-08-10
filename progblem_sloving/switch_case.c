// wap to input precentage score of a student and decide his/her grade
#include <stdio.h>
#include <conio.h>
int main()
{
    float percentage;
    int index;
    printf("Enter the Percentage: ");
    scanf("%f", &percentage);
    index = percentage / 10;
    switch (index)
    {
    case 10:

    case 9:
        printf("A+");
        break;
    case 8:
        printf("A");
        break;
    case 7:
        printf("B+");
        break;
    case 6:
        printf("B");
        break;
    case 5:
        printf("C+");
        break;
    case 4:
        printf("C");
        break;
    case 3:
        printf("D+");
        break;
    case 2:
        printf("D");
        break;
    default:
        printf("NG");
        break;
    }
    return 0;
}