// wap to find the input of two number from keyboard and calculkale
// sum, diff, product, quotient, and reamainder of the arithimetic operation.

#include <stdio.h>
#include <conio.h>
int main()
{
    int num1, num2;
    int sum, diff, product, remainder;
    float quotient;
    printf("Enter first Number: "); // taking user inputs for first numbers
    scanf("%d", &num1);
    printf("Enter Second Number: ");
    scanf("%d", &num2);
    sum = (num1 + num2);       // calculating addition using '+' operator
    diff = (num1 - num2);      // calculating subtraction using '-' operator
    product = (num1 * num2);   // calculating product using '*' operator
    quotient = (num1 / num2);  // calculating product using '/' operator
    remainder = (num1 % num2); // calcuating remainder using '%' operator

    printf("Sum: %d\nDifference: %d\nProduct: %d\nQuotient: %f\nremainder: %d\n",sum,diff,product,quotient,remainder); // displaying alll the output value that stored in variable after the calculation
    return 0;
}
