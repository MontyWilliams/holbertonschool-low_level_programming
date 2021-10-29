#include "variadic_functions.h"
/**
 * print_strings - prints numbers and strings
 * @n: numbers to print
 * @separator: separator
 * Description: prints however many #s or strings u give it
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *j;
	va_list ap;

	va_start(ap, n);

	while (i < n)
	{
		j = va_arg(ap, char *);
		if (j != NULL)
		printf("%s", j);
		else
		{
			printf("(nil)");
		}

		i++;

		if (separator != NULL && i < n)
		printf("%c ", *separator);

	}
		va_end(ap);

printf("\n");
}
