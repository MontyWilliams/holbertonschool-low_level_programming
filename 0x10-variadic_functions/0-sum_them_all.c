#include "variadic_functions.h"

/**
 * sum_them_all - adds sum of all parameters
 * @n: integer being added
 * Description: adds however many #'s u give it
 * Return: sum of ints
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	if (n == 0)
		return (0);

	return (sum);
}
