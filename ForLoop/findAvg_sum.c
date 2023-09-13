#include<stdio.h>

int main(){
    int n,i, sum=0;
    float avg;

    printf("Enter a Number: ");
    scanf("%d",&n);

    for(i=0; i<=n; i++){
        sum +=i;

    }
    printf("The sum is: %d\n", sum);
    avg= sum/n;
    printf("the Average is : %f", avg);
}