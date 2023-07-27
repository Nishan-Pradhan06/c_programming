// write a program to add two different input from user....

#include <stdio.h>
#include <conio.h>
int main()
{
    int num1, num2, add; //creating varibale
    printf("Enter first number: "); // input 1st no
    scanf("%d", &num1);
    printf("Enter SEcond number: "); // input 2nd no
    scanf("%d", &num2);
    add = num1 + num2; // add both numbers and store in variable "add
    printf("sum of two number is: %d",add);
    return 0;
}