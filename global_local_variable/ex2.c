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
    num++;
    printf("\nThe function display() is called %d times", num);
}

// #include <stdio.h>

// // Function to display the number of times it is called
// void display() {
//     // Static variable to keep track of the count
//     static int count = 0;
//     count++; // Increment the count each time the function is called
//     printf("display() has been called %d times.\n", count);
// }

// // Example function to test the display function
// void testFunction() {
//     printf("Inside testFunction()\n");
//     display(); // Call the display function
// }

// int main() {
//     printf("Inside main()\n");
//     display(); // Call the display function from main
//     testFunction(); // Call the testFunction, which also calls display
//     display(); // Call display again from main
//     return 0;
// }
