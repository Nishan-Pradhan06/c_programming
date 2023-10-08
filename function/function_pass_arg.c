// argument function
#include <stdio.h>
#include <conio.h>
void exchange(int a, int b)
{
    int c;
    c = a;
    a = b;
    b = c;
}
int main()
{
    int a = 5, b = 7;
    printf("Before Exchange : %d and %d\n", a, b);
    exchange(a, b); // function call with arguments
    printf("\nAfter Exchange: %d and %d \n", a, b);
    return 0;
}