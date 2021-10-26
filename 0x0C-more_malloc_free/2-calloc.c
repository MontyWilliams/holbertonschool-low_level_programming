#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of spe size
 * @nmemb: number of elements
 * @size: byes in element
 * Description: allocate mem
 * Return: pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (!ptr)
		return (NULL);

	do {
		ptr[i] = 0;
		i++;
	} while (i < nmemb * size);

	return (ptr);
}
