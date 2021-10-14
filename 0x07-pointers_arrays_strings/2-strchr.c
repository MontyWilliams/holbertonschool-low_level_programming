#include "main.h"
/**
 * _strchr- locates a specific char in a string
 * @s: the string to be searched
 * @c: char
 * Return: string
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

return (s);
}
