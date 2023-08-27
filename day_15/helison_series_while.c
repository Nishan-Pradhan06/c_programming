// gereate series 7,22,11,34,17,52 heliston series
#include <stdio.h>
#include <conio.h>
int main()
{
    int n = 7, i=2;
    printf("%d\n", n);
    while (i < 10)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
            printf("%d\n", n);
        }
        else
        {
            n = n * 3 + 1;
            printf("%d\n", n);
        }
        i++;
    }
    return 0;
}