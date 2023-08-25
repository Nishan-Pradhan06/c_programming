#include <stdio.h>
#include <conio.h>
int main()
{
    int n, f = 1, factor;
    printf("Enter the number");
    scanf("%d", &n);
    for (f = 1; n >= f; f++)
    {
        /* code */
        factor = n % f;
        if (factor == 0)
        {
            /* code */
            printf("Factor is %d\n", f);
        }
    }
    return 0;
}