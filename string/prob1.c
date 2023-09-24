// wap to read a line of text form keyboard and count the number of character present in the string
// wap to read a string make reverse the string in output
#include <stdio.h>

#include <string.h>
#define MAX 100
int main()
{
    char name[MAX], revname[MAX];
    int i, j, length;
    printf("Enter a string : ");
    gets(name);
    length = strlen(name);
  
    for (i = 0, j = length - 1; i < length; i++, j--)
    // Your code here
    {
        revname[i] = name[j];
    }

    revname[i] = '\0';

    printf("Reverse string is %s", rename);
    return 0;
}