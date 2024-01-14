// a data file named "num.txt" contains sorted list of numbers. wap to insert more number into data file so that the list remains sorted afer insert too.
#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
int writeTofile(int n)
{
    FILE *fp1, *fp2;
    int m, added = 0;
    fp1 = fopen("D:\\Number.txt", "r");
    fp2 = fopen("D:\\temp.txt", "w");
    while (feof(fp1) == 0)
    {
        if (fscanf(fp1, "%d", &m) == 1)
        {
            if (n < m && added == 0)
            {
                fprintf(fp2, "%d\t", n);
                added = 1;
            }
            fprintf(fp2, "%d\t", m);
        }
    }
    if (added == 0)
    {
        fprintf(fp2, "%d\t", n);
        fclose(fp1);
        fclose(fp2);
        system("del number.txt");
        system("ren temp.txt number.txt");
        printf("\nNumber Inserted");
    }
}

int emptyFIle()
{
    FILE *fp;
    fp = fopen("number.txt", "w");
    fclose(fp);
    return 0;
}

int main()
{
    FILE *fp;
    int n;
    char ch;
    // fp = fopen("D:\\num.txt", "r");
    do
    {
        printf("Enter a number");
        scanf("%d", &n);
        writeTofile(n);
        printf("\nDo you want to add another number");
        fflush(stdin);
        ch = getche();
    } while (ch == 'y' || ch == 'Y');
    return 0;
}