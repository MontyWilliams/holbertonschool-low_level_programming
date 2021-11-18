#include "holberton.h"

/**
 * _strcat - concatenates 2 strings
 * @dest: destination var
 * @src: string to be copied
 * Description: take a string and put it on another string
 * Return: char.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*dest != '\0')
	{
		dest++;
		i++;
	}
	while (*src != '\0')
	{
		*(dest++) = *(src++);
		j++;
	}
	dest = dest - (i + j);
return (dest);
}
