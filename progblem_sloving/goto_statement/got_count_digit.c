
//wap to count no of digit of a no using goto statement
#include <stdio.h>
#include <conio.h>
int main()
{
    int count = 0, num;
    printf("Enter the number");
    scanf("%d", &num);
up:
    num = num / 10;
    count = count + 1;
    // count ++; // another way to count by adding 1

    if (num > 0)
        goto up;
    printf("%d", count);
    return 0;
}