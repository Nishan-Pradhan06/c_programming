// write a program to store names of 10 studenrs in a data file specified by user using

#include <stdio.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
    int i;
    char student_name;
    FILE *fp;
    // printf("Following  are the value sent from commanmd line argument");
    // for ( i = 0; i < argc; i++)
    // {
    //     printf("%s\n", argv[i]);
    // }
    if (argc > 1)
    {
        fp = fopen(argv[1], "w");
        if (fp == NULL)
        {
            printf("File not Opended");
        }
        else
        {
            for (i = 0; i < 10; i++)
            {
                printf("\nEnter name of student %d : ", i + 1);
                scanf("%s", &student_name);
                fprintf(fp, "%s\n", student_name);
            }
            fclose(fp);
        }
    }
    else
    {
        printf("Data file name is missing");
    }

    return 0;
}
