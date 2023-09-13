// Program to take 5 values from the user and store them in an array
// Print the elements stored in the array

#include<stdio.h>

int main(){
    int i;
    int value[5];
    printf("Enter five numbers: \n");

    for(i=0; i<5; ++i){
        scanf("%d\n", &value[i]);
    }

    for(i=0; i<5; i++){
        printf("The Array is: %d\n ", value[i]);
    }
    return 0;
}


