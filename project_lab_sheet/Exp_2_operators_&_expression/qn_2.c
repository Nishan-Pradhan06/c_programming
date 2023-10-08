// accepts marks in n subjects and calculate the total percentages
#include <stdio.h>

int main()
{
    int num, i;
    float marks, obtain_marks = 0.0, total, percent; // Initialize obtain_marks to 0.0

    // Prompt the user to enter the number of subjects
    printf("\nEnter number of subjects: ");
    scanf("%d", &num);

    printf("\nEnter your marks:");

    for (i = 1; i <= num; ++i)
    {
        printf("\nEnter mark in subject %d: ", i);
        scanf("%f", &marks);

        // Accumulate the marks for each subject in obtain_marks
        obtain_marks = obtain_marks + marks;
    }

    total = num * 100.0;// Calculate the total possible marks assuming each subject has 100 marks
    percent = (obtain_marks / total) * 100.0; // Calculate the percentage

    // Display the calculated percentage
    printf("Percentage: %.2f%%\n", percent);

    return 0;
}
