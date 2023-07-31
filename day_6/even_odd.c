#include <stdio.h>
#include <conio.h>
int main()
{
    int num, r; // variable declaration
    printf("Enter a number: ");
    scanf("%d", &num);
    r = num % 2;
    if (r == 0)
    {
        /* code */
        printf("Number is Even");
    }
    else
    {
        /* code */
        printf("Number is Odd");
    }
    return 0;
}