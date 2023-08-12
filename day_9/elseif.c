// wap to find the grade of a student entering marks of subjects
#include <stdio.h>
#include <conio.h>
int main()
{
    int marks;
    printf("Enter your mark: ");
    scanf("%d", &marks);
    if (marks >= 80)
    {
        printf("\nGrade A");
    }
    else if (marks >= 75 && marks < 80)
    {
        printf("\nGrade B");
    }
    else if (marks > 69 && marks <= 74)
    {
        printf("\nGrade C");
    }
    else
    {
        printf("\nFail");
    }
    return 0;
}