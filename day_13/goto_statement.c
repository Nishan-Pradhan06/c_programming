//goto statement (uncoditional jump instruction)
//goto label
/*

*/
//infinte loop which never ends
#include<stdio.h>
#include<conio.h>
int main()
{
    // forward jump
    // goto here;
    // printf("HEllow cs\n");
    // here:
    // return 0;


    //backward jump
    here: // defining level
    printf("Hello cs\n");
    goto here;
    return 0;
}