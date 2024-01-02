#include <stdio.h>

int binarysearch(int arr[], int n, int key)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int i, n, key;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter %d integers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Prompt user for the key to search
    printf("Enter the key to search: ");
    scanf("%d", &key);

    // Sorting array using Binary Search algorithm
    int binaryResult = binarysearch(arr, n, key);
    if (binaryResult != -1)
    {
        printf("Element is present at index %d\n", binaryResult);
    }
    else
    {
        printf("Element is not present in array\n");
    }

    return 0;
}
