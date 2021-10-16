#include "main.h"

/**
 * square_root - find the square root of a number
 * @i: number
 * @j: int
 *
 * Return: sqrt
 */

int square_root(int i, int j)
{
	if (i * i == j)
	{
		return (i);
	}
	else if (i * i > j)
	{
		return (-1);
	}
	else
	{
		return (square_root(i + 1, j));
	}
}

/**
 * _sqrt_recursion - returns natrual prime number
 * @n: number
 * Return: Square root
 */

int _sqrt_recursion(int n)
{
	int a = 1;

	return (square_root(a, n));
}
