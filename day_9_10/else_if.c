// wap to find input percentage score of a student and decide her/his division
#include <stdio.h>
#include <conio.h>
int main()
{
    float percent, m1, m2, m3, m4, m5, tm; // m1=marks, tm=total mark
    percent = m1 + m2 + m3 + m4 + m5 / 500;
    printf("Enter your Percentage Score: ");
    scanf("%f", &percent);
    if (percent >= 80)
    {
        /* code */
        printf("Distinction");
    }
    else if (percent >= 60)
    {
        /* code */
        printf("first Division");
    }
    else if (percent >= 45)
    {
        /* code */
        printf("Second Division");
    }
    else if (percent >= 35)
    {
        /* code */
        printf("Third Division");
    }
    else
    {
        /* code */
        printf("Fail");
    }
    return 0;
}