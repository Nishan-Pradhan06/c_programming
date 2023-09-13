//8. Write a C program to display the n terms of odd natural numbers and their sum.

#include<stdio.h>

int main() {
    int n, i, sum=0;
    printf("enter the number: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
       
       printf("%d\n", 2*i-1);
       sum += 2*i-1;
    }

    printf("the sum %d", sum);


 return 0;
}