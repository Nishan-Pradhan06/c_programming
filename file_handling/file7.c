// a datafile named "std.dat" contains roll, name &age of some students. another file mamed "mark.dat" contains roll & marks for 3 different subject of the same students. wap to merge these two files.
#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *fp1, *fp2, *fp3;
    int marks, rollno, age, m1, m2, m3;
    char name[50];
    fp1 = fopen("D:\\std.txt", "r");
    fp2 = fopen("D:\\mark.txt", "r");
    fp3 = fopen("D:\\finals.txt", "w");
    while (feof(fp3                mm.)==0)
    {
        fscanf(fp1, "%d,%s,%d", &rollno, &name, &age);
        fprintf(fp3, "%d,%s,%d", rollno, name, age);
        fscanf(fp2, "%d,%d,%d,%d", &rollno, &m1, &m2, &m3);
        fprintf(fp3, "%d,%d,%d", m1, m2, m3);
    }
    printf("Merge Sucessfully");
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return 0;
}
// a data file named "std.dat" contains roll, name and age for some students. wap to delete a student based on roll no support by user.
