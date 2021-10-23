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

int j;
int i;
int **ptr;
ptr = malloc(sizeof(int *) * height);

if (width < 1 || height < 1)
{
	return (NULL);
}
for (i = 0; i < height; i++)
ptr[i] = malloc(sizeof(int) * width);

if (ptr == NULL)
for (j = 0 ; j < height; j++)
	free(ptr[j]);

return (ptr);

}
