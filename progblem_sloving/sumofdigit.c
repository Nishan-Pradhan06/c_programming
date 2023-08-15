//wap to sum of digit using goto statement
#include <stdio.h>
#include <conio.h>
int main()
{
    int num, sum = 0, digit;
    printf("Enter NUmber");
    scanf("%d", &num);
up:
    digit = num % 10;
    sum = sum + digit;
    num = num / 10;
    if (num > 0)
        goto up;
    printf("%d", sum);
    return 0;
}