#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;
    printf("Enter Number");
    scanf("%d%d%d", &a, &b, &c);
    if ((a + b) > c && (a + c) > b && (b + c) > a)
    {
        /* code */
        printf("It is a triangle");
    }
    else
    {
        printf("It is not a triangle");
    }

    return 0;
}