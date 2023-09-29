//global variable

/* local -Those variables which are defined within some function and are accessible to that function only are called Local Variables.

global -Those variables which are defined outside of function block and are accessible to entire program are known as Global Variables.


local-Scope is local to that block or function where they are defined.

global -Scope is global i.e. they can be used anywhere in the program.


local -Default value is unpredictable (garbage).

global -Default value is Zero (0).
*/
#include<stdio.h>
#include<conio.h>
void display(); //fucntion

int x=10; //global varibale

int main(){
    printf("Value of X is %d",x);
    display();
    printf("\nValue Of X is %d",x);
    return 0;
}
void display(){
    int x=20;
    printf("\nValue of X inside Display() is :%d ",x);//local variable
    x=70;
}

//storage class of variable in c
/*
1. local varibale/ automatic variable
2. global varibale/ exernal varibale
3. static varibale /static memory allocation
4. register varibale

    scope/ visibility
    lifetime/longenity
*/