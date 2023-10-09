// Check whether the input number is prime/composite.

#include <stdio.h>
int main()
{
    int num, i, flag;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num < 1)
    {
        printf("\nInvalid Input\n");
        return -1;
    }
    flag = 0;
    for (i = 2; i <= num - 1 && !flag; ++i)
    {
        if (num % i == 0)
        {
            printf("%d is not a Prime Number.\n", num);
            printf("The factors are: %d and \n", i);
        }
        else
        {
            printf("%d is a Prime Number.", num);
        }
    }
}