// wap to generate the pattern
/*
1   2   3
2   3   4
3   4   5
4   5   6
5   6   7


*/
#include <stdio.h>
int main()
{
  int i, j;
  for (i = 1; i <= 5; i++)
  {
    /* code */
    for (j = i; j <= i + 2; j++)
    {
      /* code */
      printf("%d\t", j);
    }
    printf("\n");
  }
}