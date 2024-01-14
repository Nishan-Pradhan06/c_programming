#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *fptr;
    int num;
    fptr = fopen("D:\\program.txt", "w");
    if (fptr == NULL)
    {
        /* code */
        printf("Error!");
        exit(1);
    }
    printf("Enter num: ");
    scanf("%d", &num);
    fprintf(fptr, "%d", num);
    fclose(fptr);

    return 0;
}