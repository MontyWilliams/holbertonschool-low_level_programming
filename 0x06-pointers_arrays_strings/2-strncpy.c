#include "holberton.h"
/**
 * _strncpy - copy a string
 * @dest: destinaition file
 * @src: file to be copied
 * Description: copies a string
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		*(dest++) = *(src++);
	}
	while (i < n)
	{
		*(dest++) = '\0';
		i++;
	}
	dest = dest - i;
return (dest);
}
