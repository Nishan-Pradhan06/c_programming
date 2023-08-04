// wap to input 3 doffenrent num and display the smallest one.
#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a < b) // if a is smaller than b
    {
        /* code */
        if (a < c) // if a is smallest than c
        {
            /* code */
            printf("%d is smallest Num", a);
        }
        else
        {
            printf("%d is smallest num", c);
        }
    }
    else // b is smaller
    {
        if (b < c) // if b is smaller than c
        {
            /* code */
            printf("%d is smallest num", b);
        }
        else // c is smallest number
        {
            printf("%d is smallest num", c);
        }
    }
    return 0;
}