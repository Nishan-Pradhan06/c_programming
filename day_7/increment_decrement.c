// increment ++  and decrement -- operator
#include <stdio.h>
#include <conio.h>
int main()
{
    int x = 5, y = 7;
    // x++;    // post increment value of x is increment by one
    // if we use it to directly print suru ma print statement  lai original x ko value dinxa ani background ma value
    x = x + 20;
    

    // ++y; // pre increment value of y is increment by one
    printf("\nValue of x is %d", x++);
    printf("\nValue of y is %d", --y);
    return 0;
}