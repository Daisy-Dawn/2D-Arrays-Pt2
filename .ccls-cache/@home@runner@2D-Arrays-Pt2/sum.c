#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int a[3][3], i, j, sr, sc;

  printf("Enter Matrix:\n");

  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
        scanf("%d", &a[i][j]);
    }
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
        printf("%d\t\t", a[i][j]);
      printf("\n");
    }
  for (i = 0; i < 3; i++)
    {
      sr = sc = 0;
      for (j = 0; j < 3; j++)
{
  sr = sr + a[i][j];
  sc = sc + a[i][j];
}
      printf("\nSum Row = %d, Sum Column = %d", sr, sc);
    }
  
}