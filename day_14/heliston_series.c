

// wao to find hte sequence 7,22,11,34,17,51 up 10th term
// heliston series
// odd xa vhane multu fly by 7*3+1
// n/2
#include <stdio.h>
#include <conio.h>
int main()
{
    int n = 7, i;
    printf("%d\n", n);

    for (i = 2; i <= 10; i++)
    {
        /* code */
        if (n % 2 == 0)
        {
            /* code */
            n = n / 2;
            printf("%d\n", n);
        }
        else
        {
            n = n * 3 + 1;
            printf("%d\n", n);
        }
    }
    return 0;
}