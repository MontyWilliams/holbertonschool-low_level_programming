#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid  - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 * Description: alloc 2d array
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{

int i;
int **ptr;
ptr = malloc(sizeof(int *) * height);

if ((width || height) < 1);
{
	free(ptr);
	return (NULL);
}
for (i = 0; i < height; i++)
ptr[i] = malloc(sizeof(int) * width);

return (ptr);

}
