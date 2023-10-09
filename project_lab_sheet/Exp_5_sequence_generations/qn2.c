#include <stdio.h>
int main()
{
    int n;
    // Prompt the user to enter the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    // Loop to generate and print the series
    for (int i = 1; i <= n; i++)
    {
        // Calculate the numerator and denominator
        double numerator = i;
        double denominator = i + 1;

        // Calculate and print the term in the series
        double term = numerator / denominator;
        printf("%.2lf", term); // Print with two decimal places

        // Add a comma and space unless it's the last term
        if (i < n)
        {
            printf(", ");
        }
    }

    printf("\n"); // Print a newline at the end

    return 0;
}
