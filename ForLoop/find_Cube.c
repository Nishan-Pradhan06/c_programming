#include<stdio.h>

int main(){
    int n,i;
    printf("Enter Number: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        
       printf("the number is %d,  and the cube of %d: %d\n", i, i, (i*i*i)); 
    }
    
  return 0;
}