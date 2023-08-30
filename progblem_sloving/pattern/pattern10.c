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
    int i, j,k,l;
    for (i = 1; i <= 5; i++)
    {
        /* code */
        for (j = 1; j <= 5 - i; j++)
        {
            /* code */
            printf(" ");
        }
        for (j = 1; j <= 2*i-1; j++)
        {
            /* code */
            printf("*");
        }
        
       

        printf("\n");
    }
    for (k = 1; k <= 5; k++)
    {
        /* code */
        for (l = 2*k-1; l >= 1; l--)
        {
            /* code */
            printf(" *");
        }
        for (l = ; l <= 2*k-1; l++)
        {
            /* code */
            printf(" ");
        }
        
       

        printf("\n");
    }
    
    return 0;
}