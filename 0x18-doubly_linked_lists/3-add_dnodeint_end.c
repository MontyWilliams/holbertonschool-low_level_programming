#include "lists.h"

/**
 * add_dnodeint_end - add node to beggining of list
 * @head: pointer
 * @n: Value to add
 * Return: New node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *copy;
	dlistint_t *tmp = *head;

	copy = malloc(sizeof(dlistint_t));

	if (copy == NULL)
		return (NULL);

copy->n = n;

	if (*head == NULL)
	{
		copy->prev = NULL;
		copy->next = NULL;
		*head = copy;
		return (copy);
	}

	while (tmp->next != NULL)
		tmp = tmp->next;

	copy->prev = tmp;
	copy->next = NULL;
	tmp->next = copy;
	return (copy);
}
