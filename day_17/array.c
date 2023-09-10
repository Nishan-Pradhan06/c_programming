// wap to create an array of 10 integer and calcualte sum of all no.

#include <stdio.h>
#include <conio.h>
int main()
{
    int num[10] = {10, 5, 2, 8, 11, 30, 3, 7, 12, 4};
    int sum = 0, i;
    for (i = 0; i < 10; i++)
    {
        /* code */
        sum += num[i];
    }
    printf("sum is %d", sum);
    return 0;
}