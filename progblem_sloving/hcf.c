// #include <stdio.h>
// #include <conio.h>
// int hcf(int a, int b);
// int main()
// {
//     int num1, num2, hcff;
//     hcff = hcf(num1, num2);
//     printf("Enter the first and second num");
//     scanf("%d%d", &num1, &num2);
//     printf("HCF is: %d", hcff);
//     return 0;
// }
// int hcf(int a, int b)
// {
//     while (b != 0)
//     {
//         /* code */
//         int temp = b;
//         b = a;
//         a = temp;
//     }
//     return a;
// }

// #include <stdio.h>
// #include <conio.h>
// int hcf(int x, int y);
// int main()
// {
//     int a,b, hcff;
//     printf("Enter the first and second num");
//     scanf("%d%d", &a, &b);
//     hcff=hcf(a,b);
//     printf("HCF is: %d", hcff);
//     return 0;
// }
// int hcf(int x, int y)
// {
//     int hcf, i;
//     for (i = 1; i < x;i++)
//     {
//         if(x%i==0 && y%i==0)
//             hcf = i;
//     }
//     // printf("HCF is: %d", hcf);
//     return hcf;
// }
#include <stdio.h>

int sum(int n);

int main()
{
    int n, sums;
    printf("Enter the  num: ");
    scanf("%d", &n);
    sums = sum(n);
    printf("sum is: %d", sums);
    return 0;
}

int sum(int a)
{
    int sum = 0;
    int i;

    for (i = 1; i <= a; i++)
    {   
        sum = sum + i;
    }
    return sum;
}
