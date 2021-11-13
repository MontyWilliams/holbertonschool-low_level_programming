#include "main.h"
/**
 * clear_bit - set bit  at spec index
 * @n: input var
 * @index: input index value to be changed
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
