// wap to count the no of digits of a no using for loop
#include <stdio.h>
#include <conio.h>
int main()
{
    int n, c;
    printf("Enter the number ");
    scanf("%d", &n);

    for (c = 0; c<n; c++)
    {
        c = n % 10;
        n=n / 10;
        if (n==0)
        {
               
        printf(" there are %d", c);
        }
     
        break;
    }
    return 0;
}