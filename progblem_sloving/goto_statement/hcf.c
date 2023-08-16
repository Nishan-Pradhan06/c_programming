// wap to find the hcf using goto statement
#include <stdio.h>
#include <conio.h>
int main()
{
    int num1, num2, rem;
    printf("Enter the number: ");
    scanf("%d", &num1, &num2);
up:
    rem = num1 % num2; // num1 is dividend and num2 is divisor, rem is remainder of the division
    if (rem == 0)      // if num1 is divisible by num2 then num2 is hcf
    {
        /* code */
        printf("HCF is %d", num2);
    }
    else // otherwaise, make current division as dividend and current remainder as divisor
    {
        num1 = num2; // put current divisor in the chair of dividend
        num2 = rem;  // put current remainder in the chair of divisor
        goto up;
    }
    return 0;
}