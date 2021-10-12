#include "main.h"
/**
 * _strpbrk - searches a string for spc bits
 * @s: string to being searched
 * @accept: bytes checking for
 * Description: look for spec set of words in a string
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
