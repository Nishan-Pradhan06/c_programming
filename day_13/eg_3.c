// wap to display all the number between 1 and 100 that are divisible by 5 and 7 both
#include <stdio.h>
#include <conio.h>
int main()
{

    int n = 1;
up:
    if (n % 5 == 0 && n % 7 == 0)
    {
        printf(" %d", n);
    }
    n++;

    if (n <= 100)
    {
        goto up;
    }

    return 0;
}
