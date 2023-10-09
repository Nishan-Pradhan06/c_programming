// 0, 1, 1, 2, 3, 5, 8, 13, 21…..etc.
#include <stdio.h> // Include the standard input/output library
#include <conio.h> // Include the non-standard "conio.h" library, often used for console input/output on some platforms

int main()
{
    int firstnum = 0, secondnum = 1, term, i, series = 0; // Declare integer variables and initialize some of them

    // Prompt the user to enter the number of terms in the series
    printf("Enter how many terms in the series: ");
    scanf("%d", &term); // Read the input and store it in the 'term' variable

    printf("Series are: "); // Print a message

    // Loop 'term' times to generate the Fibonacci series
    for (i = 0; i < term; i++)
    {
        printf("%d\t", series); // Print the current term followed by a tab

        // Calculate the next term in the Fibonacci series
        series = firstnum + secondnum;
        firstnum = secondnum; // Update the first number in the series
        secondnum = series;   // Update the second number in the series
    }

    return 0; // Return 0 to indicate successful execution
}
