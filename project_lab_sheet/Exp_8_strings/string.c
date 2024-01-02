#include <stdio.h>

int main()
{
    char str[100]; // Assuming a maximum string length of 100 characters
    int count = 0;

    printf("Enter a string: ");
    gets(str); // Input a string

    // Iterate through the characters until the null terminator is encountered
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }

    printf("Number of characters in the string: %d\n", count);

    return 0;
}
