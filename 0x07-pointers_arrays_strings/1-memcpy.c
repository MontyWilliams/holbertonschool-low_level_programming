#include "main.h"
/**
 * _mempcpy - fill memory with a constant byte
 * @dest: pointer to file to be filled
 * @src: source file
 * @n: number of iterations
 * Description: fills the first n bytes of memory area pointed to by n
 * Return: void
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;
	char *t = (char *)dest;
	char *s = (char *)src;
	for (i = 0; i < n; i++)
		t[i] = s[i];

return (dest);
}
