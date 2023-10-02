#include <stdio.h>
#include <conio.h>
int hcf(int a, int b);
int main()
{
    int num1, num2, hcff;
    hcff = hcf(num1, num2);
    printf("Enter the first and second num");
    scanf("%d%d", &num1, &num2);
    printf("HCF is: %d", hcff);
    return 0;
}
int hcf(int a, int b)
{
    while (b != 0)
    {
        /* code */
        int temp = b;
        b = a;
        a = temp;
    }
    return a;
}