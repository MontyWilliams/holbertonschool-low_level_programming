#include "main.h"

/**
 * _pow_recursion - find value of an exponent recursively
 * @num: number
 * @exp: exponent
 * Return: exppnent result
 */
int _pow_recursion(int num, int exp)
{
	if (exp < 0)
		return (-1);
	if (exp == 0)
		return (1);
	if (exp > 0)
		return (num * _pow_recursion(num, exp - 1));

	return (num);
}
