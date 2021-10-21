#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenate 2 strings
 * @s1: string
 * @s2: 2nd str
 * Description: contanat 2nd string on the end of 1st
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{

	char *ptr;
	int i;
	int len = 0;

	do {
	len++;
	} while ((s1[len]) + s2[len]);

	ptr = malloc(sizeof(char) * (len - 1));

while (*s1)
	{
		ptr[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		ptr[i] = *s2;
		i++;
		s2++;
	}

	return (ptr);
}
