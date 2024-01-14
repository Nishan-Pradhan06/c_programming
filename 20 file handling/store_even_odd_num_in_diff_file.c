#include <stdio.h>
#include <conio.h>
void evenOdd(int num);
int main()
{
    int num[], i, chechEvenOdd;
    printf("Enter the Numbers:\n");
    for (i = 0; i <= 5; i++)
    {
        printf("Enter the %d numbers: \t", i + 1);
        scanf("%d", &num[i]);
    }
    chechEvenOdd = evenOdd(num[]);
    printf("Numbers are stored sucessfully........");
    return 0;
}

void evenOdd(int num[])
{
    if (num % 2 == 0)
    {
        printf("%d are even number", num);
    }
    else
    {
        printf("%d are odd number", num);
    }
}