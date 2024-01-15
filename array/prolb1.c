// wap to read 10 different numbers into an array & find the largest no.
#include <stdio.h>
#include <conio.h>
int main()
{
    int num[10];
    int largest = 0, i;
    for (i = 0; i < 10; i++)
    {
        /* code */
        printf("Enter ten integers: ");
        scanf("%d", &num[i]);
    }

    for (i = 0; i < 10; i++)
    {
        /* code */

        if (num[i] > largest)
            largest = num[i];
    }
    printf("%d is largest number", largest);
}