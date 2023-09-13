// 1. Write a program in C to display the first 10 natural numbers.

#include <stdio.h>

int main(){
    int i, num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(i=1;i<=num;i++){
        printf("%d\n",i);
    }
    return 0;
}