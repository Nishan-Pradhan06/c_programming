#include <stdio.h>
#include <conio.h>
int main()
{
    char name[100];
    // int c = 0; second apporach
    int c = -1;
    printf("Enter your Name: ");
    // fist approach

    // scanf("%[^A-Z]s", name);
    // printf("\nYour name is: %s", name);

    // second apporach
    //  do
    //  {
    //      /* code */
    //      name[c++] = getchar();
    //  } while (name[c - 1] != '\n');
    //  name[c - 1] = '\0';

    // third apporach
    do
    {
        /* code */
        name[++c] = getchar();
    } while (name[c] != '\n');
    name[c] = '\0';

    printf("\n Your name is: %s", name);

    return 0;
}

