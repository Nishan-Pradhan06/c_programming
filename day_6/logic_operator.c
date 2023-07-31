
// unary: - +
//  if int a =5;
//  then b= -a; which change the value of a into negative a which is -5

// logical operators : &&=> logical AND, ||=> logical OR, !=> logical NOT

// wap to input the marks for 5 different subejct and decide wheather a student is pass or fail
#include <stdio.h>
#include <conio.h>
int main()
{
    int m1, m2, m3, m4, m5; ////taking inputs integers using scanf() function from user
    printf("Enter the Marks for 5 Sujects: ");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);
    if (m1 >= 40 && m2 >= 40 && m3 >= 40 && m4 >= 40 && m5 >= 40) // using logical AND&& to check the 5 subject
    {
        /* code */
        printf("Passed!!!");
    }
    else
    {
        /* code */
        printf("Failed!!!");
    }
    return 0;
}