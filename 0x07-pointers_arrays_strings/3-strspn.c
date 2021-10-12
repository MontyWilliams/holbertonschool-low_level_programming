#include "main.h"
/**
 * _strspn - get the length of a prefix substring
 * @s: string
 * @accept: chars looking for
 * Description: get length of string using nested for loops
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
