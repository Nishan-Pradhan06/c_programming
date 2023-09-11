#include <stdio.h>
#include <conio.h>
int main()
{
    int num[] = {3,
                 8,
                 9,
                 12,
                 21,
                 29,
                 31,
                 50,
                 63,
                 78};
    int low = 0,
        high = 9, mid, key;
    printf("Enter the number you want to search:");
    scanf("%d", &key);
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (num[mid] == key)
        {
            printf("\nThe element is found at location %d", mid + 1);
            break;
        }
        else if (num[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if (low > high)
    {
        /* code */
        printf("%d not found in list", key);
    }
    return 0;
}
