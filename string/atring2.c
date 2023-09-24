//wap to 
#include <stdio.h>
#include <conio.h>
#define MAX 200
int main()
{
    char str1[MAX], str2[MAX], str3[MAX];
    int i=0;
    printf("Enter First String: ");
    gets(str1);
    printf("Enter Second String: ");
    gets(str2);
    strcat(str1, str2);
    while (str1!=0)
    {
        /* code */
        str3= str1;
        i++;
        
    }
    
    
    printf("String is ", str3);
    return 0;
}