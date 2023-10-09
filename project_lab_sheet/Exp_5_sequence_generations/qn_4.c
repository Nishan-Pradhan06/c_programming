// generate hailstone series : 7,22,11,34,17,52,26,13
#include <stdio.h> // Include the standard input/output library
int main()
{
    int firstnum = 7, term, i; // Declare integer variables
    // Prompt the user to enter the number of terms in the series
    printf("Enter how many terms in the series: ");
    scanf("%d", &term); // Read the input and store it in the 'term' variable
    printf("Hailstone series: "); // Print a message
    // Loop 'term' times to generate the Hailstone series
    for (i = 0; i < term; i++)
    {
        printf("%d\t", firstnum); // Print the current term followed by a tab

        // Check if 'firstnum' is even
        if (firstnum % 2 == 0)
        {
            firstnum = firstnum / 2; // If even, calculate the next term
        }
        else
        {
            firstnum = firstnum * 3 + 1; // If odd, calculate the next term
        }
    }

    return 0; // Return 0 to indicate successful execution
}
