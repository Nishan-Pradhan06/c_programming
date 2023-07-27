// wtire a program to calcuate simple interest
#include <stdio.h>
#include <conio.h>
int main()
{
    float principal, rate, time, simple_interest; // creating varibale
    printf("Enter the Principal amount: ");       // taking input from user for principal amount
    scanf("%f", &principal);
    printf("Enter the Rate amount: "); // taking input from user for rate amount
    scanf("%f", &rate);
    printf("Enter the time: "); // taking input from user for time
    scanf("%f", &time);
    simple_interest = (float)(principal * rate * time) / 100;   // applying formula to calculate the si
    printf("\nThe Simple Interest is %.2f\n", simple_interest); // display ,,%2.f disply as 2.002
    return 0;
}