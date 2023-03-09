#include <stdio.h>
 
int main()
{
  int row, col, i, j;
  int matrix[10][10], transpose[10][10];
 

  scanf("%d %d", &row, &col);
 
 
  for (i = 0; i < row; i++){

    for (j = 0; j < col; j++){

      scanf("%d", &matrix[i][j]);

    }
  }
 //transposing
  for (i = 0; i < row; i++){

    for (j = 0; j < col; j++){

      transpose[j][i] = matrix[i][j];

    }

  }
 
  printf("Transpose matrix:\n");
 
  for (i = 0; i < col; i++) {
    for (j = 0; j < row; j++)
      printf("%d ", transpose[i][j]);
    printf("\n");
  }

  return 0;
}