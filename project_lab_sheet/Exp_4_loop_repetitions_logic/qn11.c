// If a number is input through the keyboard, WAP to obtain the sum of the first and last digit of the number.
#include <stdio.h>

int main()
{
    int num, firstDigit, lastDigit, sum = 0;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Extract the last digit of the number
    lastDigit = num % 10;

    // Remove the last digit from the number
    while (num >= 10)
    {
        num = num / 10;
    }
    firstDigit = num;

    // Calculate the sum of the first and last digits
    sum = firstDigit + lastDigit;

    // Display the result
    printf("Sum of first and last digits: %d + %d = %d\n", firstDigit, lastDigit, sum);

    return 0;
}
