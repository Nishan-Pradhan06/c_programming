#include <stdio.h>
int main()
{
    int x;
    for (x = 1; x <= 10; x++)
    {
        if (x < 5)
        {
            continue;
        }
        else
        {
            break;
        }
        printf("hello");
    }
    return 0;
}