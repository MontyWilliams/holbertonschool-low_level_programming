#include "main.h"
/**
 * get_bit - returns a bit at spec index
 * @n: int t
 * @index: incertion poin
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 31)
		return (-1);

	if (n == '\0')
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
