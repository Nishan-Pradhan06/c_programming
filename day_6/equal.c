
//comparision operator/relational operations.
// operators
/*
< less than to
> greater than to
<=  less or equal to
>= greater or equal to
== equal to
!= not equal to
*/


//
#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    if (a != b)
    {
        printf("%d Doesnot Equal to %d", a, b);
    }
    else
    {
        printf("%d Equals To %d ", a, b);
    }
    return 0;
}