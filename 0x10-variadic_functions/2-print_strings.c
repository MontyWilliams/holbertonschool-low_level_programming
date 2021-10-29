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
		printf("%s", j);
		i++;

		if (separator != NULL && i < n)
		printf("%c ", *separator);
		else if (j == NULL)
		{
			printf("(nil)");
		}
	}
		va_end(ap);

printf("\n");
}
