#include <stdio.h>
#include <conio.h>
int main()
{
    int i,c=0;

    // for (n = 100; n >= 1; n--)
    // {
    //     /* code */
    //     if (n % 2 == 0)
    //     {
    //         /* code */
    //     }
    //     else
    //     {
    //         printf("%d", n);
    //     }
    // }
    for ( i = 1; i <= 32; i++)
    {
        /* code */
        if (i%3==0)
        {
            /* code */
            c=c+1;
        }
        
    }
            printf("%d\n",c);
    

    return 0;
}