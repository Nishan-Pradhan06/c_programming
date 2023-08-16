// wap to rev num using goto statement
#include <stdio.h>
#include <conio.h>
int main()
{
    int num, rev = 0, digit, num1;
    printf("Enter the number");
    scanf("%d", &num);
    num1 = num;
up:
    digit = num % 10;
    rev = rev * 10 + digit;
    num = num / 10;

    if (num > 0)
        goto up;
    // printf("%d", rev);
    if (rev == num1)
    {
        /* code */
        printf("prenum");
    }
    else
    {
        printf("no");
    }

    return 0;
}