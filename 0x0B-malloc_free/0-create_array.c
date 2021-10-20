#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creats an array
 * @size: of the array
 * @c: the char in th array
 * Desription: creats an array
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
	ptr[i] = c;
	}
	return (ptr);
}
