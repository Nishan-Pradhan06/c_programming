// union example
#include <stdio.h>
#include <conio.h>
union student
{
    /* data */
    int roll;      // 2 byte
    float fee;     // 4 byte
    char sex;      // 1 byte
    double weight; // 8 byte
};
struct person
{
    /* data */
    int roll;      // 2 byte
    float fee;     // 4 byte
    char sex;      // 1 byte
    double weight; // 8 byte
};

int main()
{
    union student s;
    struct person p;
    p.roll = 12;
    p.fee = 120;
    p.sex = 'M';
    p.weight = 75.6;
    printf("Size of student is %d", sizeof(s));
    printf("\nSize of person is %d", sizeof(p));
    printf("\nPerson Roll: %d\n",p.roll);
    return 0;
}

