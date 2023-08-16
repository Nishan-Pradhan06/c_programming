// wap to rev num using goto statement
#include <stdio.h>
#include <conio.h>
int main()
{
    int num, rev = 0, digit;
    printf("Enter the number");
    scanf("%d", &num);
up:
    digit = num % 10;
    num = num / 10;
    rev = rev * 10 + digit;
    if (num > 0)
        goto up;
    printf("%d", rev);
    
    return 0;
}