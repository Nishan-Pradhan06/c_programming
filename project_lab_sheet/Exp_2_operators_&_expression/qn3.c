// Read temperature in Celsius and convert it into Fahrenheit, where F = 9 * C / 5 + 32
#include <stdio.h>

int main()
{
    float C, F;
    // Prompt the user to enter the temperature in Celsius
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &C);

    // Convert Celsius to Fahrenheit using the formula
    F = 9 * C / 5 + 32;

    // Print the temperature in Fahrenheit
    printf("The temperature in Fahrenheit is %f", F);

    return 0;
}
