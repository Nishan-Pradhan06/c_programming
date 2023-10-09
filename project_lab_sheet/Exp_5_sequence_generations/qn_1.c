// 1,2,3,4,5 up to nth term
#include <stdio.h>
#include <conio.h>
int main()
{
    int term, i, sequence = 0;
    printf("Enter the number of terms: "); // taking input from user for no of terms in series
    scanf("%d", &term);
    for (i = 1; i <= term; i++)
    {
        sequence = sequence + 1;
        printf("%d\n", sequence);
    }

    return 0;
}