#include <stdio.h>
#include <conio.h>
int sum(int a);
int main()
{
    int n, nn, i;
    printf("Enter the number of terms:");
    scanf("%d", &nn);
    printf("Enter the number\n");
    for (i = 1; i <= nn; i++)
    {
        scanf("%d", &n);
        /* code */
    }

    printf("\nThe Sum of %d is :%d", n, sum(n));
    return 0;
}
int sum(int a)
{
    int sum = 0, i;
    for (i = 1; i < a; i++)
    {
        /* code */
        sum = sum + i;
    }
    return sum;
}