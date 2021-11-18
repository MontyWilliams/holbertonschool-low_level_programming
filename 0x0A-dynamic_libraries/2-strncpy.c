#include "holberton.h"
/**
 * _strncpy - copy a string
 * @dest: destinaition file
 * @src: string to be copied
 * @n: int that specifies number of iterations
 * Description: copies a string, the function itself is a pointer
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
