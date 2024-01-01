#include <stdio.h>

void sequence(int n)
{
    int i, sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum = sum + 1;
        printf("%d\n", sum);
    }
}

int main()
{
    int term;
    printf("Enter the number of terms: "); // taking input from user for no of terms in series
    scanf("%d", &term);

    sequence(term);

    return 0;
}