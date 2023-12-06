// wap to create a data fule named "mytext.dat" and store some text.
#include <stdio.h>
#include <conio.h>
void writedata()
{
    FILE *fp;
    char ch;
    fp = fopen("D:\\mytext.txt", "w");
    if (fp == NULL)
    {
        /* code */
        printf("\nError in opening the file!");
    }
    else
    {
        printf("\nEnter the text you want to write: ");
        do
        {
            ch = getchar();
            putc(ch, fp);
        } while (ch != EOF);
        fclose(fp);
        printf("Saved");
    }
}
int main()
{
    writedata();
    return 0;
}