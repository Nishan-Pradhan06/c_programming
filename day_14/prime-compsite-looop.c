#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i;
    printf("Enter the Number: ");
    scanf("%d", &n);
    for (i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            printf("%d is Composite", n);
        }
        break;
    }
    if (i > n / 2)
    {
        printf("%d is Prime", n);
    }

    return 0;
}