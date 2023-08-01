
//<< bit wise left shift operator
//>> bitwise right shift operator

#include <stdio.h>

#include <conio.h>
int main()
{
    int x = 5, y = 7;
    // printf("%d\n", 11 ^ 12); //^exclusive or
    // printf("%d\n", ~11);     //~bitwise not operator...
    printf("Memory size for: %d",sizeof(5.7F));
    printf("%d", x>>1);// right shift 
    printf("%d", x<<1); //left shift ek ley shift garnu vhaneko 2 ley multipy garnu barabar hoo
    return 0;
}