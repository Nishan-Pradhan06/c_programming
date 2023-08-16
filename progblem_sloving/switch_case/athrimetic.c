#include <stdio.h>
#include <conio.h>
// #include<stdlib.h>
int main()
{
    char choice;
up:
    printf("Select your choice: \n");
    printf("n1. Addition\nn2. Subtraction\nn3. Multiplication\nn4. Division\n");
    printf("n5. Quit program");
    fflush(stdin);
    choice = getche(); // take input from user
    switch (choice)
    {
    case '1':
        /* code */
        printf("Addition operation Selected.");

        break;
    case '2':
        /* code */
        printf("Subtraction operation Selected.");
        break;
    case '3':
        /* code */
        printf("Multiplication operation Selected.");
        break;
    case '4':
        /* code */
        printf("Division operation Selected.");
        break;
    case '5':
        /* code */
        printf("Sorry to see you go.");
        getch();
        exit(0);

    default:
        printf("Wrong Input");
        break;
    }

    return 0;
    goto up;
// down:
}