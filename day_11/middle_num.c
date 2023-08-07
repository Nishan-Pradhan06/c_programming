//wap to find the middle number from 3 input num 18,16,25 middle num is 18
#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b && a < c || a < b && a > c)
        {
            /* code */
            printf("\nThe Middle number is %d", a);
        }
    else if (b > a && b < c || b < a && b > c)
        {
            /* code */
            printf("\nThe Middle number is %d", b);
        }
    else
    {
        /* code */
        printf("\nThe Middle number is %d", c);
    }

    return 0;
}
