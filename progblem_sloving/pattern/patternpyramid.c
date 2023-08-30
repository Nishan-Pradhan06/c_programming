// wap to generate the pattern
/*
    *
   ***
  *****
 *******
*********
 */

#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        /* code */
        for (j = 1; j <= 5 - i; j++)
        {
            /* code */
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            /* code */
            printf("%d",j);
        }
        // for (j = 1+; j <= i - 1; j++)
        // {
        //     /* code */
        //     printf("%d",j);
        // }

        printf("\n");
    }
    return 0;
}