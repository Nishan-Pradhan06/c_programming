//Write a C program to compute the sum of the first 10 natural numbers.

#include<stdio.h>

int main(){
    int i, sum=0;

    for(i=1; i<=10; i++){
        sum += i;
    }
    printf("The sum of natural number is %d", sum);

    return 0;
}