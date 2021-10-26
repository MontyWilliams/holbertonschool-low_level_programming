#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: int
 * @max: int
 *Description: create an array of ints
 * Return: ptr to array
 */
int *array_range(int min, int max)
{
    int *ptr;
	int i, j, len;

	if (min > max)
		return (NULL);

	length = (max - min) + 1;
    ptr = malloc(sizeof(int) * len);
    if (ptr == NULL)
        return (NULL);
        do {
            ptr[j] = i;
            j++;   
        } while (i <= max; i++);
        return(ptr);


}