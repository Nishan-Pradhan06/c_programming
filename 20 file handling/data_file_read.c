// wap to read in a data file named "test.txt" and dispay them on the screen.
#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *fp;
    int i, n;
    fp = fopen("D:\\text.txt", "r");
    while (feof(fp) == 0)
    {
        if (fscanf(fp, "%d", &n) == 1)
        {

            printf("%d\t", n);
        }
    }

    fclose(fp);
    return 0;
}