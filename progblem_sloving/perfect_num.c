#include <stdio.h>
#include <conio.h>
int main()
{
    int num, f = 1, factor, sum = 0, perfect;
    printf("Enter the number");
    scanf("%d", &num);
    perfect = num;
up:
    factor = num % f;
    if (factor == 0)
    {
        sum = sum + f;
    }
    f++;
    if (num > f)
    {
        goto up;
    }
    if (sum == perfect)
    {
        /* code */
        printf("%d is perfect number",perfect);
    }
    else
    {
        printf("%d is not perfect number",perfect);
    }

    return 0;
}