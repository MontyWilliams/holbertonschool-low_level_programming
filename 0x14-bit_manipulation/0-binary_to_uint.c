#include "main.h"

/**
 * binary_to_uint - converts a binary to unsigned int
 * @b: input
 * Return: uint
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int sum = 0;

	if (!b)
		return (0);

	while (b[i])
	{
		if (b[i] == '1' || b[i] == '0')
		{
			sum = ((sum * 2) + (b[i] - '0'));
		}
		else
		{
			return (0);
		}
		i++;
	}
return (sum);
}
