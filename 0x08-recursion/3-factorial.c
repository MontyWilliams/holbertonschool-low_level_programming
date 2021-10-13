#include "main.h"
/**
 * factorial - print factorials recursively
 * @n: int
 * Description: find factorials
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);

	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}

}
