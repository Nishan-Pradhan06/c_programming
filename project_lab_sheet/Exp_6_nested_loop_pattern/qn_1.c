// generates the pattern
/**
 *          1
           232
          34543
         4567654
        567898765
       67890109876
      7890123210987
 *
 */
#include <stdio.h>

int main()
{
    int n, i, j;

    // Prompt the user to enter the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Generate the pattern
    for (i = 1; i <= n; i++)
    {
        // Print leading spaces
        for (j = 1; j <= n - i; j++)
        {
            printf("   ");
        }

        // Print increasing numbers
        for (j = i; j <= 2 * i - 1; j++)
        {
            printf("%d", j);
        }

        // Print decreasing numbers
        for (j = 2 * i - 2; j >= i; j--)
        {
            printf("%d", j);
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
