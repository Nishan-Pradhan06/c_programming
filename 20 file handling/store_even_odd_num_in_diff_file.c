#include <stdio.h>

void evenOdd(int num, FILE *evenfp, FILE *oddfp);

int main()
{
    int num[5], i;
    FILE *evenfp, *oddfp;

    evenfp = fopen("even.txt", "w");
    oddfp = fopen("odd.txt", "w");

    if (evenfp == NULL || oddfp == NULL)
    {
        printf("Error opening files for writing.\n");
        return 1;
    }

    printf("Enter the Numbers:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Enter the %d numbers: \t", i + 1);
        scanf("%d", &num[i]);
        evenOdd(num[i], evenfp, oddfp);
    }

    printf("Numbers are stored successfully.\n");

    fclose(evenfp);
    fclose(oddfp);

    return 0;
}

void evenOdd(int num, FILE *evenfp, FILE *oddfp)
{
    if (num % 2 == 0)
    {
        fprintf(evenfp, "%d\t", num);
    }
    else
    {
        fprintf(oddfp, "%d\t", num);
    }
}
