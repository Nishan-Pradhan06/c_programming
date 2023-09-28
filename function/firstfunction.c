// wap to define user define function to add two numbers
#include <stdio.h>
void add(void);
int main()
{
    add(); // calling the funtion without any parameters
    return 0;
}
void add(void)
{
    int a = 5, b = 5, sum;
    sum = a + b;
    printf("sum is:%d ", sum);
}
