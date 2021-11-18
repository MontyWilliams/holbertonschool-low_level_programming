#include "holberton.h"

/**
 * _strncat - concatenates 2 strings
 * @dest: destination var
 * @src: string to be copied
 * @n: int
 * Description: take a string and put it on another string
 * Return: char.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (*dest != 0)
	{
		dest++;
		i++;
	}
	for (j = 0 ; j < n; j++)
	{
	if (*src == 0)
	{
	break;
	}
	else
	{
		*(dest++) = *(src++);
	}
	}
	dest = dest - (i + j);
return (dest);
}
