// wap to generate pattern
/*
1   2    3   4     5
1   2    3   4     5
1   2    3   4     5
1   2    3   4     5
1   2    3   4     5
*/
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
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}