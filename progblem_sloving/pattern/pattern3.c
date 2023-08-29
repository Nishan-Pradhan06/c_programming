// wap to generate the pattern 
/*
5
5   4
5   4   3
5   4   3   2
5   4   3   2   1


*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i;
    for (n = 5; n >= 1; n--)
    {
        /* code */
        for (i =5 ; i>= n; i--)
        {
            /* code */
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}