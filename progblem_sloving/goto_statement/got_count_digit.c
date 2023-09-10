
//wap to count no of digit of a no using goto statement
#include <stdio.h>
#include <conio.h>
int main()
{
    int num, sum=0,n;
    // n= num;
    printf("Enter the number");
    scanf("%d", &num);
up:
    n = num % 10;
    // sum = sum + n;
    sum= sum+1;
    num= num/10;
    // count ++; // another way to count by adding 1

    if (num > 0)
        goto up;
    printf("%d", sum);
    return 0;
}