// wap to create a data file named "emp.dat" and store id, name and salary for samoe employee using structure.
#include <stdio.h>
#include <conio.h>
struct employee
{
    int id;
    char name[40];
    float salary;
};
void saveData(struct employee e)
{
    FILE *fp;
    fp = fopen("D:\\text.txt", "a");
    if (fp == NULL)
    {
        printf("File could not be opened.");
    }
    else
    {
        fprintf(fp, "%d\n%s\n%f\n", e.id, e.name, e.salary);
        fclose(fp);
        printf("\nData Saved");
    }
}
void empRegister()
{
    struct employee e;
    printf("Enter emp id: ");
    scanf("%d", &e.id);
    fflush(stdin);
    printf("Enter emp name: ");
    gets(e.name);
    printf("Enter emp salary: ");
    scanf("%f", &e.salary);
    saveData(e);
}
void main()
{
    char ch;
    do
    {
        empRegister();
        printf("\nDo you want to register next? ");
        fflush(stdin); /// clear the pending input from stdin/keyboard
        scanf("%c", &ch);
    } while (ch == 'y' || ch == 'Y');
    getch();
}