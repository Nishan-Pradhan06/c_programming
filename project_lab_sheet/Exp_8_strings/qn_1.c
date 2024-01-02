#include <stdio.h>

int main()
{
    int arrey[10];
    int i, small, large, n, j;
    printf("enter number");
    for (i = 0; i < 10; i++)
    {
        scanf("%d ", &arrey[i]);
    }
    printf("your number are:");
    for (i = 0; i < 9; i++)
    {
        printf("%d ", arrey[i]);
    }
    for (i = 0; i < 9; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (arrey[i] > arrey[j])
            {
                n = arrey[i];
                arrey[i] = arrey[j];
                arrey[j] = n;
            }
        }
    }
    printf("assending order:");
    for (i = 0; i < 10; i++)
    {
        printf("%d", arrey[i]);
    }
    small = arrey[0];
    large = arrey[9];

    printf("small=%d\n", small);
    printf("large=%d", large);
    return 0;
}