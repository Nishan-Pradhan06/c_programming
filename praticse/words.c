#include <stdio.h>
int main()
{
    int count = 0;
    char ch;
    FILE *fptr;
    fptr = fopen("words.txt", "r");
    if (fptr == NULL)
    {
        printf("Error!");
    }
    while ((ch = fgetc(fptr)) != EOF)
    {
        if (ch == 32)
        {
            count++;
        }
    }
    printf("Total words = %d", count + 1);
    fclose(fptr);
    return 0;
}