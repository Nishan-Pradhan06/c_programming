//Find the sum of all elements of an array

#include<conio.h>

int main(){
    int a[10],i,n,sum=0;

    printf("Enter the element of an array: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("%d: ", i);
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++){
        sum += a[i];
    }
    printf("Sum is: %d", sum);

    return 0;
}
