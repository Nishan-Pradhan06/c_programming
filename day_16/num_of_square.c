// wap to calculate the square if a number
// the program should terminate according to user choice.

#include <stdio.h>
#include <conio.h>
int main()
{
    int n, square;
    char ch;
    do
    {
        printf("Enter the Number: ");
        scanf("%d", &n);
        square = n * n;
        printf("Square number of %d is %d", square, n);
        printf("\nDo you want to repeat or not");
        printf("\n(Y/N): ");
        ch = getche();
    } while (ch == 'y' || ch == 'Y');
}