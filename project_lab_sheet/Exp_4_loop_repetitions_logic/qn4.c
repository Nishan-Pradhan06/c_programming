// Check whether an input number is palindrome/ piglatin.
#include <stdio.h>

int main()
{
    int num, rev = 0, num2, digit;

    // Prompt the user to enter a number
    printf("Enter the Number: ");
    scanf("%d", &num);

    // Store the original number in 'num2' for later comparison
    num2 = num;

    // Reverse the number
    while (num != 0)
    {
        digit = num % 10;       // Get the last digit of 'num'
        num = num / 10;         // Remove the last digit from 'num'
        rev = digit + rev * 10; // Build the reverse number digit by digit
    }

    // Check if the reversed number is the same as the original
    if (rev == num2)
    {
        printf("\nThe given number is Palindromic"); // If it is, it's a palindrome
    }
    else
    {
        printf("\n The Given Number Is Not A Palindrome."); // Otherwise, it's not a palindrome
    }

    return 0;
}
