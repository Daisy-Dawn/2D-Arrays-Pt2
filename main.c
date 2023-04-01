#include <stdio.h>
#include <stdlib.h>

//Write a program that reads and prints 2 matrices (all of 2d arrays), prints the transpose of the matrices and prints the sum of both matrix in another matrix (c) and sums the individual matrices and sums total of both matrix a and matrix b. 

int main(void) 
{
  int a [4][5], b[4][5], c[4][5], i, j, sum1 = 0, sum2 = 0, sum3 = 0;
  printf("Welcome User, Please enter the elements your array A:\n");

  for (i = 0; i < 4; i++)
    {
      for (j = 0; j < 5; j++)
        scanf("%d", &a[i][j]);
    }

  printf("\nPlease enter the elements your array B:\n");

  for (i = 0; i < 4; i++)
    {
      for (j = 0; j < 5; j++)
        scanf("%d", &b[i][j]);
    }

  printf("\nYour Matrix A is:\n");

  for (i = 0; i < 4; i++)
    {
      for (j = 0; j < 5; j++)
        printf("%d\t\t", a[i][j]);
      printf("\n");
    }

  printf("\nYour Matrix B is:\n");

  for (i = 0; i < 4; i++)
    {
      for (j = 0; j < 5; j++)
        printf("%d\t\t", b[i][j]);
      printf("\n");
    }

  printf("\nYour Matrix A Transpose is:\n");

  for (i = 0; i < 5; i++)
    {
      for (j = 0; j < 4; j++)
        printf("%d\t\t", a[j][i]);
      printf("\n");
    }

  printf("\nYour Matrix B Transpose is:\n");

  for (i = 0; i < 5; i++)
    {
      for (j = 0; j < 4; j++)
        printf("%d\t\t", b[j][i]);
      printf("\n");
    }

  printf("\nThe sum of the Matrix A to B is:\n");

  for (i = 0; i < 4; i++)
    {
      for (j = 0; j < 5; j++)
        {
          c[i][j] = a[i][j] + b[i][j];
          printf("%d\t\t", c[i][j]);
        }
      printf("\n");
        }

  for (i = 0; i < 4; i++)
    {
      for (j = 0; j < 5; j++)
      {
        sum1 = sum1 + a[i][j];
      sum2 = sum2 + b[i][j];
        sum3 = sum3 + c[i][j];
}
    }
  printf("\nSum of Matrix A = %d\n", sum1);
    printf("\nSum of Matrix B = %d\n", sum2);
    printf("\nSum of Matrix A & B = %d\n", sum3);

printf("\n\nEnd of program\n");
  /*sleep(10);
  system("clear");
  printf("Welcome, User\n");*/
  
  return 0;
}