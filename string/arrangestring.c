#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char temp[50], name[10][50];
    int i, j;
    printf("Enter the number of names: ");
    for (i = 0; i < 9; i++)
    {
        /* code */
        gets(name[i]);
    }

    for (i = 0; i < 9; i++)
    {
        /* code */
        for (j = 0; j < 9 - i; j++)
        {
            /* code */
            if (strcmpi(name[j], name[j + 1]) > 0)
            {
                /* code */
                strcpy(temp, name[j]);
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], temp);
            }
        }
    }
    printf("Name stored are: ");
    for (i = 0; i < 9; i++)
    {
        /* code */
        printf("\n%s", name[i]);
    }

    return 0;
}