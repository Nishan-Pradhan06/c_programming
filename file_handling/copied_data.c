#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *sfp, *dfp;
    char sfilename[30], dfilename[30];
    char c;

    printf("\nEnter source filename: ");
    gets(sfilename);
    printf("\nEnter Destination filename: ");
    gets(dfilename);
    sfp = fopen(sfilename, "r");

    if (sfp == NULL)
    {
        printf("\nsourceFile cannot be opended.!!!");
    }
    dfp = fopen(dfilename, "w");
    if (dfp == NULL)
    {
        printf("\nDestinationFile cannot be created or opended.!!!");
    }
    while ((c = fgetc(sfp)) != EOF)
        fputc(c, dfp);
    printf("\n Copied");
    fclose(dfp);
    fclose(sfp);
    getch();
}