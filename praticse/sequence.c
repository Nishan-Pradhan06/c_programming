#include<stdio.h>
#include<conio.h>
int main ()
{
    int firstnum=1, i, nth_num;
    printf("Enter the nth term of number : ");
    scanf("%d",&nth_num);
    printf("Sequence are  : ");
    for ( i = 1; i <= nth_num; i++)
    {
        /* code */
        printf("%d,",i);
    }
    return 0;
}