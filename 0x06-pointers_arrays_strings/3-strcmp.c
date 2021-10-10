#include "holberton.h"

/**
 * _strcmp - compares 2 strings
 * @s1: comparative string
 * @s2: string
 * Description: compares 2 strings
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			i = (*s1 + '0') - (*s2 + '0');
			break;
		}
		s1++;
		s2++;
	}
return (i);
}
