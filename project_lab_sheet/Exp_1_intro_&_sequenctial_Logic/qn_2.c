Read temperature in farhenheit and convert it into celsius, where C=5*(F-32)/9.
#include<stdio.h>
int main()
{
    float C,F;
    printf("enter the temperature in Farhenheit:");
    scanf("%f",&F);
    C=5*(F-32)/9;
    printf("The temperature in celcius is %f",C);
    return 0;
}