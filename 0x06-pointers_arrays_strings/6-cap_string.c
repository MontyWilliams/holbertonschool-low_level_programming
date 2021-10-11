#include "holberton.h"
/**
 * cap_string - capitolizes a string
 * @str: string to be capitolized
 * Description: turns words to caps
 * Return: Always 0.
 */
char *cap_string(char *str)
{
int i, j;
char sep[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != 0; i++)
	{
	while (str[i] != '\0')
	{
		for (j = 0; sep[j] != '\0'; j++)
			if (str[i - 1] == sep[j])
				{
					i++;
				}

		if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
	}

	}
		i++;
	}
return (str);
}
