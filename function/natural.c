#include <stdio.h>
#include <conio.h>
void natural();
int main()
{
    natural();
}

void natural()
{
    int num, n, sum = 0, i;
    printf("Enter the n number: ");
    scanf("%d", &n);
    printf("Enter the  number: ");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &num);
        sum = sum + num;
    }

    printf("\nThe Sum of Natural numbers is %d", sum);
}