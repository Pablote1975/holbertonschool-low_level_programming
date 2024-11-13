#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *alloc_grid- Moneda 18
 *
 *@widht: varaible
 *@height: variable
 *Return: grid
 */

int **alloc_grid(int width, int height)
{

int **grid = (int **)malloc(height * sizeof(int *));
int i, j;

if (width <= 0 || height <= 0)
{
return (NULL);
}
if (grid == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
grid[i] = (int *)malloc(width * sizeof(int));
if (grid[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(grid[j]);
}
free(grid);
return (NULL);
}
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}
return (grid);
}
