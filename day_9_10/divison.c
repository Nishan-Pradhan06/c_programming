// wap to find which division did a student obtain from the input percentage using simple if
#include <stdio.h>
#include <conio.h>
int main()
{
    float per;
    printf("Enter percentage: ");
    scanf("%f", &per);
    if (per >= 80 && per <= 100)
    {
        /* code */

        printf("Distinsction");
    }
    if (per >= 60 && per < 80)
    {
        /* code */
        printf("First Division");
    }
    if (per >= 45 && per < 60)
    {
        /* code */
        printf("Second DIvison");
    }
    if (per >= 35 && per < 44)
    {
        /* code */
        printf("THird Divison");
    }
    if (per < 34)
    {
        /* code */
        printf("Failed");
    }

    return 0;
}