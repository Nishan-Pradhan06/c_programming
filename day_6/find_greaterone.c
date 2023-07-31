//wap to to find the greaterone number by taking input from keyboard
#include<stdio.h>
#include<conio.h>
int main(){
    int a,b;
    printf("Enter two numbers:"); //taking inputs of 2 integers using scanf() function is
    scanf("%d%d",&a,&b);           
    //overflow if user enters large values
    if (a>b) //using conditon to declear wheather a is greater or b
    {
        /* code */
        printf("%d is greater number",a);
    }
    else
    {
        /* code */
        printf("%d is greater number",b);
    }
    return 0;
    
}