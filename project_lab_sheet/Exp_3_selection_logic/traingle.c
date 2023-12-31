#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;
    printf("enter abc");
    scanf("%d%d%d", &a, &b, &c);

    if (a + b > c && b + c > a && a + c > b)
        printf("valid");
    else
        printf("no valid");

    return 0;
}