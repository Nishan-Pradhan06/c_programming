#include<stdio.h>
int main() {
    
    int i, num, mul;
    printf("Enter the number: ");
    scanf("%d", &num);

    for(i=1; i<=num; i++){
       
        mul = num*i;

        printf("The multiplication of %d x %d: %d\n", num,i, mul);

    }
    return 0;
}