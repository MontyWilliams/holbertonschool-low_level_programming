#include "main.h"
/**
 * _memset - fill memory with a constant byte
 * @s: pointer to file to be filled
 * @b: char to be printed
 * @n: number of iterations
 * Description: fills the first n bytes of memory area pointed to by n
 * Return: void
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
return (s);
}
