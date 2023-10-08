// input seconds and converts it into hours, minutes, and seconds.
#include <stdio.h>

int main()
{
    int second, hours, minutes;

    // Prompt the user to enter the number of seconds
    printf("Enter the Seconds: ");
    scanf("%d", &second);

    // Calculate hours by dividing seconds by 3600 (60 seconds * 60 minutes)
    hours = (second / 3600);

    // Calculate remaining seconds after calculating hours
    second = second % 3600;

    // Calculate minutes by dividing the remaining seconds by 60
    minutes = (second / 60);

    // Calculate remaining seconds after calculating minutes
    second = (second % 60);

    // Display the result with appropriate formatting
    printf("\nHours:%dhrs\tMinutes:%dmin\tSeconds:%dsec", hours, minutes, second);

    return 0;
}
