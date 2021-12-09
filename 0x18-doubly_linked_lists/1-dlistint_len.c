#include "lists.h"

/**
 * dlistint_len - print the elemts in a list
 * @h: Head pointer
 * Return: Number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;
	const dlistint_t *copy;

	copy = h;

	while (copy)
	{
		copy = copy->next;
		i++;
	}
	return (i);
	}
