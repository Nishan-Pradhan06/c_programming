//Copy the elements of one array into another array

#include<stdio.h>

int main(){
    int arr1[100], arr2[100],i,n;

    printf("Enter Number of an Erray: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("%d: ",i);
        scanf("%d", &arr1[i]);
    }

    for(i=0; i<n; i++){
        arr2[i]=arr1[i];
    }

    printf("First array:");

    for(i=0; i<n; i++){
        printf("%d", arr1[i]);
    }
    printf("\n");
    
    printf("Second array:");
    for(i=0; i<n; i++){
        printf("%d", arr2[i]);
    }
    printf('\n');

    return 0;
}