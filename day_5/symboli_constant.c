/*using symbolic contanct*/
// WAP to calculate area of cicrle : area = pi*r*r
#include<stdio.h>
#include<conio.h>
#define PI 3.14 // define the symbolic constant ; yasko vlaue yaha bayak aru thau bata change garna sakidaina
int main ()
{
    float raduis, area; //declearing the variable named radius and area
    // const PI = 3.14; // another way to declear the constant variable
    printf("enter the radius of circle: "); //taking the input from the user
    scanf("%f",&raduis); 
    area = PI*raduis*raduis; //calculate the value taken from user and string in variable area
    printf("Area of the cicrle is: %f",area); // displaying the result of area that stored in varibale named area
    return 0;
}