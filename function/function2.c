//find the area of rectangle using function
#include<stdio.h>
#include<conio.h>
void area(void);
int main(){
    area();
    return 0;   
}

void area(void)
{
    float length, breadth, area;
    printf("Enter the Length of Rectangle : ");
    scanf("%f", &length );
    printf("\n");
    printf("Enter the Breadth of Rectangle:  ");
    scanf("%f",&breadth);
    area = length* breadth;
    printf ("\nArea is %0.1f ",area);
    return ;
}