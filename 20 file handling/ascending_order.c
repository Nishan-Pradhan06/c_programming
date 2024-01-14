#include <stdio.h>
#include <conio.h>
#define NULL 0
int main()
{
    struct record
    {
        int employee_id;
        char name[25];
        char designation[20];
        float salary;
    };
    struct record employee, t;
    struct reecord temp[100];
    FILE *fp;
    char ch;
    int count = 0, i, j;
    fp = fopen("employee.dat", "wb+");
    if (fp == NULL)
    {
        printf("\n Error-cannot opend the Destination file");
    }
    else
    {
        printf("\n Enter number of records you want to add: ");
        do
        {
            printf("Enter id: ");
            scanf("%d", &employee.employee_id);
            printf("Enter Name: ");
            scanf("%[^\n]", employee.name);
            printf("Enter Designation: ");
            scanf("%[^\n]", employee.designation);
            printf("Enter Salary:Rs.");
            scanf("%f", &employee.salary);
            fwrite(&employee, sizeof(struct record), 1, fp);
            printf("\n Do You Want To Add More Records? Y/N : ");
            scanf("%c", &ch);

        } while (ch != 'n');
        rewind(fp);
        fread(&employee, sizeof(struct reecord), 1, fp);
        while (!feof(fp))
        {
            temp[count] = employee;
            count++;
            fread(@employee, sizeof(struct record), 1, fp);
        }
    }
    fclose(fp);
    for (i = 0; i < count - 1; i++)
    {
        for (j = 0; j < count - 1 - i; j++)
        {
            if (temp[j].employee_id > temp[j + 1].employee_id)
            {
                t = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = t;
            }
        }
    }
    printf("sorted list is: \n");
    for (i = 0; i < count; i++)
    {
        printf("Employee id: %d\n", temp[i].employee_id);
        printf("Name:%s\n", temp[i].name);
        printf("Designation:%s\n", temp[i].designation);
        printf("Salary:%.2f\n", temp[i].salary);
    }
    return 0;
}