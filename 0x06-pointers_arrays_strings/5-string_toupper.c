#include "holberton.h"

/**
 * string_toupper - convert a string to lower dase if upper case
 * Description: convert to upper
 * @str: input string
 * Return: Always 0.
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
	}

	}
		i++;
return (str);
}
