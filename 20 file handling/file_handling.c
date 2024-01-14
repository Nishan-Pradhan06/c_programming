// wap to create a data file and store some numbers in it.
#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *fp;
    int i, n;
    fp = fopen("D:\\text.txt", "w");
    printf("Enter the 5 Different Numbers: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &n);
        fprintf(fp, "%d\t", n);
    }
    fclose(fp);
    return 0;
}