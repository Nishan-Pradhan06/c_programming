//wap to compare two string without using strcmp 
#include<stdio.h>
#include<conio.h>
#define MAX[100]
int main ()
{
    char str[MAX], str2[MAX];
    int cmp;
    printf("Enter first the string");
    gets(str);
    printf("\n Enter second the string ");
    gets (str2) ;
    for ( cmp = 0; str[cmp]!= '\0'|| str2[cmp]!='\0'; cmp++)
    {
        if (str[cmp]-str2[cmp])
        {
            /* code */
            
        }
        
    }
    
}