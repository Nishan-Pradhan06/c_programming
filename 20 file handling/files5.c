// wap to count the number of characters in the file using random access mechan
#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("D:\\mytext.txt", "w");
    fprintf(fp, "Hello how are you? ");
    fclose(fp);
    fp = fopen("D:\\mytext.txt", "r");
    if (fp == NULL)
    {
        printf("FIle Error..");
    }
    else
    {
        // printf("\nFIle position at the beginging.............%ld", ftell(fp)); // ftell use long interger so ld is used....
        // fseek(fp, 0, 2);
        // printf("\nFIle position after fseek...............%ld", ftell(fp));

        // fseek(fp, 5, 0); // jump 5 byte away from beginging
        fseek(fp, -4, 2); // jump 5 byte away from beginging

        while (feof(fp) == 0)
        {
            fscanf(fp, "%c", &ch);
            printf("%c", ch);
                }
        fclose(fp);
    }
    return 0;
}