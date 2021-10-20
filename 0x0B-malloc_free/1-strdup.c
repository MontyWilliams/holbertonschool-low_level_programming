#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a string
 * @str: string to be pointed to
 * Desription: basicly clones a string but makes space for in memory w malloc
 * Return: char
 */
char *_strdup(char *str)
{
	int strlen = 0;
	int n;
	char *ptr;

	while (str[strlen])
	{
		strlen++;
	}
		strlen++;
		ptr = malloc(strlen * sizeof(char));

	for (n = 0; n < strlen; n++)
	ptr[n] = str[n];

	if (str == 0 || ptr == 0)
		return ("NULL");
	else
		return (ptr);
}
