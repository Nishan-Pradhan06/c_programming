// wap to input a number (1-7) from keyboard and display appropriate dress color
// sunday tuesday and thursday :white shirt & black pant
// monday wednesday :black shirt& white pant
// frinday : sport suit
// saturday :no uniform
#include <stdio.h>
#include <conio.h>
int main()
{
    int day;
    printf("Enter number (1-7): ");
    scanf("%d", &day);
    if (day == 1 || day == 3 || day == 5)
    {
        /* code */
        printf("White shirt & black pant");
    }
    else if (day == 2 || day == 4)
    {
        /* code */
        printf("black shirt & white pant");
    }
    else if (day == 6)
    {
        /* code */
        printf("Sport Suit");
    }
    else
    {
        printf("No uniform");
    }

    return 0;
}