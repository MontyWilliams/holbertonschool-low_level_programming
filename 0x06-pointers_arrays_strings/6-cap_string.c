#include "holberton.h"
/**
 * cap_string - capitolizes a string
 * @str: string to be capitolized
 * Description: turns words to caps
 * Return: Always 0.
 */
char *cap_string(char *str)
{
	int i;

	i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
	str[0] = str[0] - 32;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] == ' ' || str[i - 1] == '\n' ||
			str[i - 1] == '\t' || str[i - 1] == '.' ||
			str[i - 1] == ',' || str[i - 1] == ';'
			|| str[i - 1] == '!' || str[i - 1] == '?'
			|| str[i - 1] == '"' || str[i - 1] == '('
			|| str[i - 1] == ')' || str[i - 1] == '{'
			|| str[i - 1] == '}')
			{
				str[i] -= 32;
			}
		}

	i++;
	}
	return (str);
}
