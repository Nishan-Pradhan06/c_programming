#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;
    printf("Enter the three Num: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && a > c)
    {
        /* code */
        printf("%d is greater Number",a);
    }
    else if (b > c)
    {
        /* code */
        printf("%d is greater Number",b);
    }
    else
    {
        printf("%d is greater Number",c);
    }

    return 0;
}