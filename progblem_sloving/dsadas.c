#include <stdio.h>
#include <conio.h>
int main()
{
    int num[3], odd = 0, i, even = 0;
    printf("Enter a number: ");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &num[i]);
    }
    if (num[i] % 2 == 0)
    {
        even = even + 1;
        printf("even =%d", even);
    }
    else
    {
        odd = odd + 1;
        printf("even =%d", odd);
    }
    return 0;
}