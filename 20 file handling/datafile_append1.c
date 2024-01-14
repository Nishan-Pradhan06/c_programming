// a data file named "text.txt" contains some integer numbers.Wap to add more number in the same file.
// without append mode.
#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *fp, fq;
    char ch;
    int numberToAdd = 46;

    fp = fopen("D:\\text.txt", "r");
    fq = fopen("D:\\text.txt", "w");
    while (ch = fgetc(fp) != fq)
    {
        fputc(ch, fq);
    }
    fclose(fq);
    fprintf(fq,"")
}