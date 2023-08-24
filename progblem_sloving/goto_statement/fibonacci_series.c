// wap to disply fibonacci series 0, 1, 1, 2, 3, 5, 8...10th term.. using
// go to statement
#include <stdio.h>
#include <conio.h>
int main()
{
    int firstnum = 0, secondnum = 1, count = 0, term;
    printf("10th Fibonacci series are: ");

up:
    term = firstnum + secondnum;
    printf("%d ", firstnum);
    firstnum = secondnum;
    secondnum = term;

    count++;
    if (count < 10)
        goto up;

    return 0;
}