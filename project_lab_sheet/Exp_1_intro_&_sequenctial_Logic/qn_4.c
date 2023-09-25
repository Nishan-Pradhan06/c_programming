//Accept the radius of a circle and calclate the area and circumference of a circle.
#include<stdio.h>
int main()
{
    float r,Area,Circumference;
    printf("enter the radius of the circle:");
    scanf("%f",&r);
    Area=(3.14)*r*r;
    Circumference=2*3.14*r;
    printf("The area of circle is %f",Area);
    printf("\nThe circumference of circle is %f",Circumference);
    return 0;
}