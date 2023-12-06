//  wap to create a data fule named "mytext.dat" and store some text.
// wap to display the content of a data file whose structure is unkown.
//
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

void showdata()
{
    FILE *fp;
    char ch;
    int count = 0;
    fp = fopen("mytext.txt", "r");
    if (fp == NULL)
    {
        printf("File could not be opened....")
    }
    else
    {
        while ((ch = getc(fp)) != EOF)
        {
            count++;
        }
        fclose(fp);
    }
    return count;
}
void main()
{
    // writedata();
    showdata();

    getch();
}

void copyfile()
{
    FILE *fp1, *fp2;
    fp1 = fopen("mytext.txt", "r");
    fp2 = fopen("mytext.txt", "w");
    while (feof(fp1)==0)
    {
        
    }
    
}
