// wap to sum of 1 to 100;
#include <stdio.h>
#include <conio.h>
int main()
{
    int n = 0;
    int sum = 0;
    up:
    
    n++;
    sum = sum + n;
    if (n < 100)
        goto up;

    printf("%d", sum); // result is 5050
    return 0;
}