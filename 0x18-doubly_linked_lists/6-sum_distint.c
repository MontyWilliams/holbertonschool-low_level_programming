#include "lists.h"

/**
 * sum_dlistint - add vallues of all elements in linked list
 * @head: pointer
 * Return: Sum of all the data or 0.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	const dlistint_t *copy;

	copy = head;

	while (copy)
	{
		sum += copy->n;
		copy = copy->next;
	}

	return (sum);
}
