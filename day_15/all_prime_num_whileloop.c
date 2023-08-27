// display all the prime number from 200 to 2000 using while loop
#include <stdio.h>
#include <conio.h>
int main()
{
    int i = 200, j;
    while (i <= 2000)
    {
        j = 2;
        while (j <= i/2)
        {
            if (i % j == 0)
            {
                break;
            }
            j++;
        }
        if (j == i)
        {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}