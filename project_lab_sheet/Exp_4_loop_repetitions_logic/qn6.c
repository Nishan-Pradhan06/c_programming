// Read n numbers and count negative, positive and zeros.
#include <stdio.h>

int main()
{
    int num;

    // Prompt the user to enter an integer
    printf("Enter the integer: ");
    scanf("%d", &num);

    if (num < 0)
    {
        // If the number is less than 0, it's negative
        printf("The %d is Negative number.", num);
    }
    else if (num > 0)
    {
        // If the number is greater than 0, it's positive
        printf("The %d is Positive number.\n", num);
    }
    else
    {
        // If the number is neither greater nor less than 0, it must be zero
        printf("The %d is zero number.\n", num);
    }

    return 0;
}
