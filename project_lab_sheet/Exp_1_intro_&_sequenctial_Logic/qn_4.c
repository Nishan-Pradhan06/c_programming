#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char fword[50], sword[50];
    int i;
    printf("enter the string for fword : ");
    gets(fword);
    for(i=0;i<strlen(fword);i++){
        sword[i]= fword[i];
    }
    sword[i]='\0';
    printf("the string inside second word is %s  ",sword);
    return 0;
}