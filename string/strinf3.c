// wap to copy a string to another without using strcpy.

#include <stdio.h>
#include <conio.h>
#define MAX 100
int main()
{
    char str[MAX], strcopy[MAX];
    int c = 0;
    printf("Enter the String : ");
    gets(str);
    do
    {
        strcopy[c] = str[c];
    } while (str[c++] != '\0');
    printf("Your text is %s", strcopy);
    return 0;
}
