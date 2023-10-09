// WAP to print the multiplication table of the number entered by user.
#include <stdio.h>

int main()
{
    int num, mul; // Declare variables 'num' and 'mul' to store user input and multiplication results

    // Prompt the user to enter a number for multiplication
    printf("Enter the Number for multiplication: ");
    scanf("%d", &num); // Read the user input and store it in 'num'

    printf("\n");
    printf("Multiplication results are:\n");

    // Use a for loop to calculate and print the multiplication results
    for (int i = 1; i <= 10; ++i)
    {
        mul = num * i;                         // Calculate the multiplication result
        printf("%d * %d = %d\n", num, i, mul); // Print the multiplication expression and result
    }

    return 0;
}
