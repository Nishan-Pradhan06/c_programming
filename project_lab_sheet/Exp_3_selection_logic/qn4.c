// wap to find the electricity charge amount

#include <stdio.h>
#include <conio.h>
int main()
{
    float unit, charge;
    printf("Enter a unit: ");
    scanf("%f", &unit);
    if (unit <= 20)
    {
        /* code */
        printf("Charge amount is Rs 80");
    }
    else if (unit <= 50)
    {
        /* code */
        charge = 80.0 + (unit - 20) * 7.5;
        printf("Charge Amont is %f", charge);
    }
    else if (unit <= 200)
    {
        /* code */
        charge = 80.0 + 30 * 7.5 + (unit - 50) * 10.5;
        printf("Charge Amont is %f", charge);
    }
    else
    {
        /* code */
        charge = 80.0 + 30 * 7.5 + 150 * 10.5 + (unit - 200) * 12;
        printf("Charge Amont is %f", charge);
    }

    return 0;
}