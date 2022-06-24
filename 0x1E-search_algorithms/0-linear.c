#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - linear search algo
 * @array: array of
 * @value: value to search
 * @size: size of
 * description: search bru
 * Return: Always EXIT_SUCCESS
 */


int linear_search(int *array, size_t size, int value)
{
size_t i;

for (i = 0; i < size; i++)
{
printf("value checked array [%ld] = %d\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
}
return (-1);
}
