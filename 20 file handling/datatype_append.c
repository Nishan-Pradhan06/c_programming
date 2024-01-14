// a data file named "text.txt" contains some integer numbers.Wap to add more number in the same file.

#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *fp;
    int n;
    fp = fopen("D:\\text.txt", "a");
    if (fp == NULL)
    {
        printf("\nError! opening file");
    }
    else
    {
        printf("\nEnter a number: ");
        scanf("\n%d", &n);
        fprintf(fp, "%d", n);
        printf("\nData added successfully!");
    }
    return 0;
}