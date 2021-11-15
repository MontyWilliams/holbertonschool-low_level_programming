#include "main.h"
/**
 * flip_bits - finds the number flips
 * @n: input var
 * @m: input var
 * Return: uint
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int xor = n ^ m;

	while (xor > 0)
	{
		count++;
		xor &= (xor - 1);
	}
return (count);
}
