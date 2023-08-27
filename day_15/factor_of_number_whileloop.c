// find all the factors of a number using while loop
#include <stdio.h>
#include <conio.h>
int main()
{
    int n, f = 1, fact;
    printf("Enter any positive integer: ");
    scanf("%d", &n);
    while (n >= f)
    {
        fact = n % f;
        if (fact == 0)
        {
            printf("Factor are %d\n", f);
        }
        f++;
    }
    return 0;
}