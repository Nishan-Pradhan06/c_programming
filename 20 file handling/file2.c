// write program to append data file without opening it in apppend mode.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void appendNumber(int n)
{
    FILE *fp, *fp1;
    int m;
    fp = fopen("D:\\text.txt", "r");
    fp1 = fopen("D:\\temp.txt", "w");
    while (feof(fp) == 0)
    {
        if (fscanf(fp, "%d", &m) == 1)
        {
            fprintf(fp1, "%d\t", m);
        }
        fprintf(fp1, "%d\t", n);
        fclose(fp);
        fclose(fp1);
        system("del text.txt");
        system("ren temp.txt text.txt");
        printf("Append suncessfully");
    }
}
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    getch();
}