//12. Write a program in C to make such a pattern like a right angle triangle with the number increased by 1.

#include<stdio.h>
int main() {
    int i, j,n,k=1;

    printf("enter a number: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ", k++);
        }
        printf("\n");
    }
    return 0;

}