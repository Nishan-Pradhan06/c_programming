#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *fp;
    int n;
    char ch;
    fp = fopen("D:\\number.txt", "w+");
    if (fp != NULL)
    {
        do
        {
            printf("Enter the number");
            scanf("%d", &n);
            fprintf(fp, "%d\t", n);
            printf("\nDo you want to repeated Next?");
            fflush(stdin);
            ch = getche();

        } while (ch == 'y' || ch == 'Y');
        rewind(fp);
        printf("\nThe numbers are : ");
        while (feof(fp) == 0)
        {
            if (fscanf(fp, "%d", &n) == 1)
            {
                printf("%d\t", n);
            }
            fclose(fp);
        }
    }
    return 0;
}   