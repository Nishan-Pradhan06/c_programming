#include<stdio.h>
int main()
{
    float r,Area,Circumference;
    printf("enter the radius:");
    scanf("%f",&r);
    Area = 3.14*r*r;
    Circumference = 2*3.14*r;
    printf("The area of circle is %f:",Area);
    printf("\n\nThe circumference of circle is %f:",Circumference);
    return 0;
}
