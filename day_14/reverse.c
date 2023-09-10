#include <stdio.h>
#include <conio.h>
int main()
{
    int n, rev=0, digit, i;
    printf("Enter the number");
    scanf("%d", &n);
    for ( rev;i > 0; n++)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
        printf("%d", rev);
    }
        
    

    return 0;
}