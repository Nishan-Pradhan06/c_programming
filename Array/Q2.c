//Write a program in C to read n number of values in an array and display them in reverse order.

#include <stdio.h>

int main(){
    int i,n;
    int array[100];

    printf("Enter the Numbers: ");
    scanf("%d", &n);

    printf("%d is storing in Array: \n",n );

    for(i=0; i<n; i++){
        printf("%d: ", i);
        scanf("%d",&array[i]);
    }
    
    printf("Storing the array is: ");
    for(i=0; i<n; i++){
        printf("%d", array[i]);

    }
    printf("\n");

    printf("The Reverse Array is: ");
    for(i=n-1; i>=0; i--){
        printf("%d", array[i]);
    }

    printf("\n\n");
    return 0;




}
