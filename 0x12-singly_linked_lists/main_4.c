#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	size_t n;

	n = list_len(NULL);
	printf("-> %lu elements\n", n);
	return (0);
}
