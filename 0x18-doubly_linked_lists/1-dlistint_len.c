#include "lists.h"

/**
 * print_dlistint_len - print the elemts in a list
 * @h: Head pointer
 * Return: Number of nodes.
 */
size_t print_dlistint_len(const dlistint_t *h)
{
	int i;
	const dlistint_t *copy;

	copy = h;

	for (i = 0; copy; copy = copy->next)
	{
		i++;
	}
	return (i);
	}
