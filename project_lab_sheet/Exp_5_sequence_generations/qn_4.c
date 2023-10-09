// generate hailstone series : 7,22,11,34,17,52,26,13
#include <stdio.h>
#include <conio.h>
int main()
{
    int firstnum = 7, term, hailstone_series, i;
    printf("Hailstone series: ");
    scanf("%d", &term);
    for (i = 0; i < term; i++)
    {
        printf("%d", firstnum);
        if (firstnum % 2 == 0)
        {
            hailstone_series = firstnum / 2;
            printf("%d", firstnum);
        }
        else
        {
            hailstone_series = firstnum * 3 + 1;
            printf("%d ", firstnum);
        }
    }
    return 0;
}