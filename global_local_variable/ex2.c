// wawp to define a function named "display" that display the number of times it is called by other functinos..
#include <stdio.h>
#include <stdio.h>
int num;
void display();
int main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        /* code */
        display();
    }
}

void display()
{
    // num++;
    printf("\nCall count %d times", ++num);
}
