#include <stdio.h>
#include <stdlib.h>

void printGrid(int **grid)
{
    for (int row = 0; row < 9; row++)
    {
       for (int col = 0; col < 9; col++)
             printf("%2d", grid[row][col]);
        printf("\n");
    }
}

int main(int argc, char **argv)
{
  int **table;
  int i;
  int j;

	argv++;
  i = 0;
  j = 0;
  table = (int**)malloc(sizeof(table) * 9);
  while(i < 10)
  {
    table[i] = (int*)malloc(sizeof(table[i]) * 9);
    i++;
  }
  i = 0;
  while (i < 9)
  {
    while (j < 9)
    {
      if (argv[i][j] == '.')
        table[i][j] = 0;
      else
        table[i][j] = argv[i][j] - 48;
      j++;
    }
    i++;
    j = 0;
  }
  printGrid(table);

  return 0;
}
