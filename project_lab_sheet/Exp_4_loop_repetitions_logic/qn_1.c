// Calculate the sum of n numbers entered through keyboard.
#include <stdio.h>

int main()
{
    int num, n, i, sum = 0; // Initialize 'sum' to 0
    printf("Enter how many numbers you want to sum: ");
    scanf("%d", &n);

    printf("Enter the Numbers:\n");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &num);
        sum = sum + num; // Add 'num' to 'sum' in each iteration
    }

    printf("The sum of Numbers is: %d\n", sum); // Print the sum
    return 0;
}
