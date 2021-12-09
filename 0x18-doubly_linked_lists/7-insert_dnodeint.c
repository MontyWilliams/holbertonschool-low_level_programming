#include "lists.h"

/**
 * print_dlistint_backward - print the linked list
 * @h: Head pointer
 * Return: Number of nodes.
 */
size_t print_dlistint_backward(const dlistint_t *h)
{
	int i;
	const dlistint_t *copy;

	copy = h;
	while (copy->next != NULL)
		copy = copy->next;

	for (i = 0; copy; copy = copy->prev)
	{
		printf("%d\n", copy->n);
		i++;
	}
	return (i);
	}
