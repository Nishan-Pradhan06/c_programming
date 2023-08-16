#include <stdio.h>
#include <conio.h>
int main()
{
    int n, sum = 0, digit;
    printf("Enter the number");
    scanf("%d", &n);
up:
    digit = n % 10;     // extract the last digit of number
    if (digit % 2 == 0) // check if the digit is even
    {
        /* code */
        sum += digit; // sum =sum+digit;
    }
    n /= 10; // n =n /10; update n to contain only those digits expet last one

    if (n > 0)
    {
        /* code */

        goto up;
    }
    printf("Sum is %d\n", sum);
    return 0;
}