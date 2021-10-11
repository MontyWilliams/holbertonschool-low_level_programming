#include "main.h"
/**
 * _memcpy - fill memory with a constant byte
 * @dest: pointer to file to be filled
 * @src: source file
 * @n: number of iterations
 * Description: copires segment of memory
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
