#include "main.h"
/**
 * flip_bits - finds the number flips
 * @n: input var
 * @m: input var
 * Return: uint
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned int xor = n ^ m;

	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
return (count);
}
