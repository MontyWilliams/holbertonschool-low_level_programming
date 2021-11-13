#include "main.h"
/**
 * set_bit - return element at spec index
 * @n: int
 * @index: point to change
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (*n == '\0' || index > 31)
		return (-1);

	*n = ((1 << index) | *n);
	return (1);
}
