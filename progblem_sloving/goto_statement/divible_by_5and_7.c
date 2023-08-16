#include <stdio.h>
#include <conio.h>
int main()
{

    int n = 1;
up:
    if (n <= 100)
    {
        if (n % 5 == 0 && n % 7 == 0)
        {
            printf(" %d", n);
        }
    }

    n++;

    goto up;

    return 0;
}
