#include <stdio.h>
#include <conio.h>
int main()
{
    int firstnum = 0, secondnum = 1, count, term;

up:
    firstnum = firstnum + secondnum;

   
    // firstnum = term;
    
     printf("%d\t", term);
    term = firstnum;
    

    count = count + 1;
    secondnum++;
    if (count <= 10)

        goto up;

    return 0;
    //wap to generate a series 5,16,8,4,2,1
// 
// {
//  float first=5,second=16,n,c=0;
//  clrscr();
//  printf("%f \n %f \n",first,second);
//  top:
//  n= second/2;
//  second=n;
//  printf("%f \n",n);
//  c++;
//  if(c<=10)
//  goto top;

// getch();
// }
}