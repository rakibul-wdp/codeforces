#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int n, s, k = 1;
  scanf("%d", &n);

  int actual_n = (n - 1) / 2 + 6;

  s = actual_n - 1;

  for (int i = 1; i <= actual_n; i++)
  {
    for (int j = 1; j <= s; j++)
      printf(" ");
    for (int j = 1; j <= k; j++)
      printf("*");

    s--;
    k += 2;
    printf("\n");
  }

  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= 5; j++)
      printf(" ");
    for (int j = 1; j <= n; j++)
      printf("*");

    printf("\n");
  }

  return 0;
}