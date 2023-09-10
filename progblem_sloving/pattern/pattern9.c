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
    int i, j,k;
    for (i = 1; i <= 5; i++)
    {
        /* code */
        for (j = 5-i; j >0; j--)
        {
            /* code */
            printf(" ");
        }
        for (k = i; k >0 ; k--)
        {
            /* code */
            printf("%d",k);
        }
        for (j = -2; j >=i; j--)
        {
            /* code */
            printf("%d",j);
        }

        printf("\n");
    }
    return 0;
}