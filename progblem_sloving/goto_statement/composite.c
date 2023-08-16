// wap to check wheather a number is prime/composite number using goto statement
#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i = 2;
    printf("Enter the number: ");
    scanf("%d", &n);
up:
    if (i < n)
    {
        /* code */
        if (n % 1 == 0)
        {
            /* code */
            printf("%d is composite number", n);
        }
        else
        {
            i++;
            goto up;
        }
    }
    else
    {
        printf("%d is prime number", n);
    }
    return 0;
}