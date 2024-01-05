// program to create a file named employee.txt and write name id, addresss and salary of a employee to this file.
#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *fp;
    char name[30];
    int id;
    float salary;
    char address[40];
    fp = fopen("D:\\employee.txt", "w");
    if (fp == NULL)
    {
        printf("\nFile cannot be created or opended.!!!");
    }
    printf("\nEnter Employee name: ");
    gets(name);
    printf("\nEnter ID of %s: ", name);
    scanf("%d", &id);
    fflush(stdin); // clear the dummy data; prvious data
    printf("\nEnter Salary of %s: ", name);
    scanf("%f", &salary);
    fflush(stdin);
    printf("\nEnter Address of %s: ", name);
    gets(address);
    printf("\nNow Writing data to file....");
    fprintf(fp, "Name: %s\n ID: %d\n Address: %s\n Salary: %.2f", name, id, address, salary);
    printf("\nData written successfully.");
    fclose(fp);
    getch();
}