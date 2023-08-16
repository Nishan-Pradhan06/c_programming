#include <stdio.h>
int main()
{
    int n, ornum, rev = 0, rem;

    printf("Enter the number:\t");
    scanf("%d", &n);

    ornum = n;
up:
    rem = n % 10;
    rev = rev * 10 + rem;
    n = n / 10;

    if (n != 0)
    {
        goto up;
    }

    if (rev == ornum)
    {
        printf("%d is a palindrome number.", ornum);
    }

    else
    {
        printf("%d is not a palindrome number.", ornum);
    }

    return 0;
}