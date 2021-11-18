#include "main.h"
/**
 * _strstr - find a substring within a string
 * Description: search
 * @haystack: string to search within
 * @needle: search parameters
 * Return: chars found or null
 */
char *_strstr(char *haystack, char *needle)
{
	char *a = haystack, *b = needle;
		for (;;)
		{
		if (!*b)
			return ((char *) haystack);
		if (!*a)
			return (0);
		if (*a++ == *b++)
		{
			continue;
		}
			a = ++haystack;
			b = needle;
		}

}
