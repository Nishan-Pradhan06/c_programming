#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 4; i++)
    {

        /* code */
        for (j = 1; j <= 4; j++)
        {
            /* code */
            if (i == 1 || i == 4 || j == 1 || j == 4)
            {
                /* code */
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}