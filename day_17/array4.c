// wap to count the number if even and odd number stored in array
#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[5] = {2, 4, 5, 9, 8};
    int counteven = 0;
    int countodd = 0;
    int i;
    for (i = 0; i < 5; i++)
    {
        /* code */
        if (arr[i] % 2 == 0)
        {
            /* code */
            counteven++;
            printf("even number are %d", arr[i]);
        }
        else
        {
            countodd++;
        }
    }
    printf("\nThere are %d Even Number in array", counteven);
    printf("\nThere are %d odd Number in array", countodd);
    return 0;
}
