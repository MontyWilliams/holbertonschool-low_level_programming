#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @n: numbers to print
 * @separator: separator
 * Description: prints however many #s u give it
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);

	while (i < n)
	{
		printf("%d", va_arg(ap, int));
		i++;
		if (i < n)
		printf("%c ", *separator);
		va_end(ap);

	}
printf("\n");
}
