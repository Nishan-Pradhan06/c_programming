//WAP to accept the principal,rate,number of years and find out the interest.
#include<stdio.h>
int main()
{
    float p,t,r,interest;
    printf("Enter the time,rate and principal:");
    scanf("%f %f %f",&t,&r,&p);
    interest=(p*t*r)/100;
    printf("the simple interest is %f",interest);
    return 0;

}