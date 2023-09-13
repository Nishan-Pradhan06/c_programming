//Write a program in C to display a pattern like a right angle triangle using an asterisk.


#include<stdio.h>
int main() {

    int i,j, row;
    printf("Enter the number of rows: ");
    scanf("%d", &row);

    for(i=1; i<=row; i++){
        for(i=1; j<=i; j++){
            printf("#");
            
        }
        printf("\n");
        
    }
    return 0;
}

