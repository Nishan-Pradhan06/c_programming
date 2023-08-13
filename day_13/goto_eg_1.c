// wap to display number from 1 to 100 using goto statement
#include <stdio.h>
#include <conio.h>
int main()
{
    int n = 1;
up: // defining level name
    printf("%d\n", n);
    n++;
    if (n <= 100)
        goto up;// it goes searching level named up and it contious loop until n<= 100 condition is satisifed
    return 0;
}