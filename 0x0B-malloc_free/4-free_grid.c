#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid  - prints a grid of integers
 * @grid:  grid
 * @height: height of the grid
 * Description: free 2d array
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);

}
