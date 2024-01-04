#include <stdio.h>
#include <conio.h>
#include <string.h>

void toggleCase(char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
}

void titleCase(char str[])
{
    int i;
    if (str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] = str[0] - 32;
    }
    for (i = 1; str[i] != '\0'; i++)
    {
        if (str[i - 1] == ' ' && (str[i] >= 'a' && str[i] <= 'z'))
        {
            str[i] = str[i] - 32;
        }
    }
}

int main()
{
    char inputString[100];
    printf("Enter String: ");

    gets(inputString); // Avoid using gets, consider using fgets instead

    toggleCase(inputString);
    printf("Toggle Case String: %s\n", inputString);

    titleCase(inputString);
    printf("Title Case String: %s\n", inputString);

    return 0;
}
