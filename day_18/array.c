#include <stdio.h>
#include <conio.h>
int main()
{
    int n[] = {1, 4, 2, 5, 3, 6, 9};
    int secondLargest, firstLargest, i;

    if (n[0] > n[1])
    {
        /* code */
        firstLargest = n[0];
        secondLargest = n[1];
    }
    else
    {
        firstLargest = n[1];
        secondLargest = n[0];
    }

    for (i = 2; i < 7; i++)
    {
        /* code */
        if (n[i] > firstLargest)
        {
            /* code */
            firstLargest = n[i];
            secondLargest = firstLargest;
        }
        else if (n[i] > secondLargest)
        {
            /* code */
            secondLargest = n[i];
        }
    }
    printf("Second Largest Number is %d", secondLargest);
    return 0;
}