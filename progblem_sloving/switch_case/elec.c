#include <stdio.h>
int main()
{
    int u;
    float a = 0;

    printf("Enter the unit:\t");
    scanf("%d", &u);

    if (u <= 20)
    {
        a = a + 80;
        printf("%0.2f", a);
    }

    else if (u <= 50)
    {
        a = 80 + (u - 20) * 7.5;
        printf("%0.2f", a);
    }

    else if (u <= 200)
    {
        a = 305 + (u - 50) * 10.5;
        printf("%0.2f", a);
    }

    else
    {
        a = 1880 + (u - 150) * 12;
        printf("%0.2f", a);
    }

    return 0;
}