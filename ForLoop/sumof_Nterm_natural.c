//3. Write a program in C to display n terms of natural numbers and their sum.

#include<stdio.h>
int main() {
    int i, num, sum=0;
    printf("Enter the number of terms: ");
    scanf("%d", &num);
    for(i=1;i<=num; i++){
        sum += i;
        
    }
    printf("the sum is %d ", sum);
   return 0;
}