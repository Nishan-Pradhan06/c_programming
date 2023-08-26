#include <stdio.h>
#include <conio.h>
int main()
{
    int n = 0, r; // variable declaration
     // printf("Enter a number: ");
    // scanf("%d", &num);
up:
    r = n % 2;
    if (r == 0)
    {
        /* code */
        printf("%d\n", n);
    }
    if (n < 10)
    {
        /* code */
        n = n + 1;
     
        goto up;
    }

    return 0;
}