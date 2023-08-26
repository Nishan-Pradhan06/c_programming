#include<stdio.h>
#include<conio.h>
int main ()
{
    int n=0;
    // printf("%d\n",n);
    up: 
    if (n<10)
    {
        /* code */
        n=n+1;
        printf("%d\n",n);
        goto up;
    }
    
    
}