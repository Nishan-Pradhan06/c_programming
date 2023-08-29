
 //to make  this pattern 
 /* 1 1 1 1
    2 2 2 2
    3 3 3 3
    4 4 4 4
    5 5 5 5
 */
//simply change the i to n for upper pattern
#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i;
    for (n = 1; n <= 5; n++)
    {
        /* code */
        for (i = 1; i<= 5; i++)
        {
            /* code */
            printf("%d", n);
        }
        printf("\n");
    }
    return 0;
}