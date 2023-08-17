#include <stdio.h>
#include <conio.h>
int main()
{
    int num, f = 1, factor;
    printf("Enter the number");
    scanf("%d", &num);
up:
    factor = num % f;
    if (factor == 0)
    {
        printf("Factor is %d\n", f);
    }
    f++;
    if (num >= f)
    {
        goto up;
    }

    return 0;
}